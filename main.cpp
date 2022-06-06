//Objectives########
//1 - make class for each of the 2 stock categories from the dataset
//2 - make a class to read information from the dataset 
//3 - make it so that we can modify a new csv file with the data through the terminal
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

    //get bbstock items as a list
    list<BBStock> bbstockList = frw::bbStockBuilder();
     //get mmstock items as a list
    list<MMStock> mmstockList = frw::mmStockBuilder();

    // list<BaseStock> adaptedItemList;

   
    // for (auto& mmstockItem: mmstockList){
    //     Adapter *a = new Adapter(mmstockItem);
    //     // adaptedItemList.push_back(*a);
    // }

    // for (auto& item: adaptedItemList){
    //     cout<<item.getProductDescription()<<endl;
    // }

    



    
    // list<BBStock>::iterator itB;
    // cout<<"bbstock items\n";
    // cout<<"====================================================\n";

    // for(itB=bbstockList.begin();itB!=bbstockList.end();++itB){
    //     cout<<"code: "<<itB->getProductCode()<<"\nproduct title: "<<itB->getProductTitle()<<"\nproduct description: "<<itB->getProductDescription()<<"\nprice: "<<itB->getUnitPrice()<<"\nquantity: "<<itB->getQuantity()<<"\n";
    //     cout<<"====================================================\n";
    // }
    // return 0;
    // // for(auto& item: bbstockList){
    // //     cout<<item.getProductDescription()<<"\n";
    // // }

    // //get mmstock as a list
    // list<MMStock> mmstockList = frw::mmStockBuilder();
    // list<MMStock>::iterator itM;
    // for(itM=mmstockList.begin();itM!=mmstockList.end();++itM){
    //     cout<<itM->getCode()<<"\n";
    // }

    // for(auto& item: mmstockList){
    //     cout<<item.getDepartmentId()<<"\n";
    // }

    //get bbstock as a list
    //auto mmstockList = frw::mmStockBuilder();
    std::cout<<"its loaded!!\n";

   // BBStock *item = new BBStock("1","2","3",4, 5);
 
 
    return 0;
}




// #include<iostream>
// using namespace std;

// typedef int wordPlay;

// template<typename t>

// void switcher(t& a, t& b){

//     swap(b,a);
// }

// class cls1{
//     private:
//         int var1;
//     public:
//         cls1(){
//         var1 = 2;
//         }
// };

// int main(){
//     cls1 *obj1 = new cls1();//the object persists after the block is executed. Need to be deleted after. Dynamic storage duration.
//     cls1 obj2;//this object will be deleted when the block is finished. Automatic storage duration
//     delete obj1;//better way is to use smart pointers shared_ptr<cls1> obj1(new cls1); manages the pointer when it is out of the code block.

//     wordPlay x = 1;
//     wordPlay y = 2;
    

//     cout<<"x: "<<x<<"\n";
//     cout<<"y: "<<y<<"\n"; 
//     switcher(x,y);
//     cout<<"After switching\n";      
//     cout<<"x: "<<x<<"\n";
//     cout<<"y: "<<y<<"\n";

//     return 0;
// }