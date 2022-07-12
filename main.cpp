//Objectives########
/*
- Read data from the csv files
- Make an adapter class to "adapt" the data from the MMStock to BBstock
- Make a user interface through the command line
*/
#include "include/mmstock.h"//'' and "" are different
#include "include/bbstock.h"
#include "include/adapter.h"
#include <vector>
#include <list>
#include <fstream>
#include <sstream>


using namespace std;



namespace frw{

list<BBStock> bbStockBuilder(){
    
    std::ifstream file("data/barkers_boutique_stock_list_example.csv");
    list<BBStock> bbstockItems;
    if (file.is_open()) {       
        std::string line;
        while (std::getline(file, line)) {
            string values[5];
            int i = 0;
            std::istringstream ss(line.c_str());
            std::string token;
            while(std::getline(ss, token, ',')) {
                //std::cout << token << endl;
                if(i<5){
                    values[i] = token;
                    i++;
                }
                else
                {
                    cout<<"array out of bounds";
                }
            }
            //cout<<values[0]<<"\n";
            BBStock *item = new BBStock(values[0],values[1],values[2],stoi(values[3]),stoi(values[4]));
            bbstockItems.push_back(*item);
            delete item;
            item = nullptr;
        }
        file.close();
    }
    return bbstockItems;

}

list<MMStock> mmStockBuilder(){
    std::ifstream file("data/mead_modernity_stock_list_example.csv");
    list<MMStock> mmstockItems;
    if (file.is_open()) {       
        std::string line;
        while (std::getline(file, line)) {
            string values[6];
            int i = 0;
            std::istringstream ss(line.c_str());
            std::string token;
            while(std::getline(ss, token, ',')) {
                //std::cout << token << endl;
                if(i<6){
                    values[i] = token;
                    i++;
                }
                else
                {
                    cout<<"array out of bounds";
                }
            }
            //cout<<values[0]<<"\n";
            MMStock *item = new MMStock(stoi(values[0]),values[1],values[2],stoi(values[3]),stoi(values[4]),stoi(values[5]));
            mmstockItems.push_back(*item);
            delete item;
            item = nullptr;
        }
        file.close();
    }
    return mmstockItems;

}

}

int main(){
    char option = 'n';

    //get bbstock items as a list
    list<BBStock> bbstockList = frw::bbStockBuilder();
     //get mmstock items as a list
    list<MMStock> mmstockList = frw::mmStockBuilder();

    list<BaseStock*> adaptedItemList;

    for(auto& item: bbstockList){
        BaseStock* x;
        x = &item;
        adaptedItemList.push_back(x);
    }
    
    for (auto& mmstockItem: mmstockList){   
        BaseStock* b = new Adapter(mmstockItem);
        adaptedItemList.push_back(b);
    }

    cout<<endl;
    while(true){
        system("clear");
        cout<<"=======================Stock Catalogue===================\n";
        for (auto& item: adaptedItemList){        
            cout<<"code: "<<item->getProductCode()<<"\nproduct title: "<<item->getProductTitle()<<"\nproduct description: "<<item->getProductDescription()<<"\nprice: "<<item->getUnitPrice()<<"\nquantity: "<<item->getQuantity()<<"\n";
            cout<<"====================================================\n";       
        }

        cout<<"What would you like to do?"<<"\n";
        cout<<"[s]ell an item\n"<<"[a]dd an item\n"<<"[q]uit\n";
        cin>>option;
        if(option == 'q'){
            cout<<"Quitting...\n";
            return 0;
        }
        else if(option == 's')
        {   
            string id = "k";
            cout<<"[e]nter id of the item to sell: \n";
            cin>>id;
            for (auto& item: adaptedItemList){
                if(item->getProductCode() == id){
                    cout<<"[e]nter quantity to sell: \n";
                    string q;
                    cin>>q;
                    item->sellQuantity(stoi(q));
                    break;
                }
            }
        }else if(option == 'a'){
             string id = "k";
            cout<<"[e]nter id/code of the item to buy: \n";
            cin>>id;
            for (auto& item: adaptedItemList){
                if(item->getProductCode() == id){
                    cout<<"[e]nter quantity to buy: \n";
                    string q;
                    cin>>q;
                    item->buyQuantity(stoi(q));
                    break;
                }
            }
        }
    }
    return 0;
}



