//Objectives########
//1 - make class for each of the 2 stock categories from the dataset
//2 - make a class to read information from the dataset 
//3 - make it so that we can modify a new csv file with the data through the terminal
#include "include/mmstock.h"//'' and "" are different
using namespace std;



int main(){

    std::cout<<"its loaded!!\n";
 
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