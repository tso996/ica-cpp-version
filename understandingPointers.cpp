//Objectives########
//1 - make class for each of the 2 stock categories from the dataset
//2 - make a class to read information from the dataset 
//3 - make it so that we can modify a new csv file with the data through the terminal
#include "include/mmstock.h"//'' and "" are different
#include "include/bbstock.h"
#include <vector>
#include <list>
#include <fstream>
#include <sstream>


using namespace std;



namespace frw{

list<BBStock> bbStockBuilder(){
    
    std::ifstream file("data/barkers_boutique_stock_list_example.csv");
    
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            string values[5];
            int i = 0;
            std::istringstream ss(line.c_str());
            std::string token;
            while(std::getline(ss, token, ',')) {
                //std::cout << token << endl;
                values[i] = token;
                i++;
            }
            cout<<values[0]<<"\n";
            BBStock *item = new BBStock(values[0],values[1],values[2],stoi(values[3]),stoi(values[4]));

        }
    file.close();
}

}

list<MMStock> mmStockBuilder(){


}

}

int main(){

    //get mmstock as a list
    //auto bbstockList = frw::bbStockBuilder();

    //get bbstock as a list
    //auto mmstockList = frw::mmStockBuilder();
    std::cout<<"its loaded!!\n";

   // BBStock *item = new BBStock("1","2","3",4, 5);
    float x;
    {
        float *stuff = new float();
        *stuff = 5.1;
        x = *stuff;
        cout<<"*stuff before delete: "<<*stuff<<"\n";
        cout<<"stuff before delete: "<<stuff<<"\n";

        delete stuff;
        cout<<"*stuff after delete: "<<*stuff<<"\n";
        cout<<"stuff after delete: "<<stuff<<"\n";
        stuff = nullptr;
        cout<<"stuff after nullptr: "<<stuff<<"\n";


    }
    cout<<x;
  
 
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