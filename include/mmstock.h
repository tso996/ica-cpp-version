#include <iostream>
#include <string>

class MMStock
{
    private:
        int departmentId;
        std::string code;
        std::string nameAndDescription;
        int unitPricePounds;
        int unitPricePence;
        int quantityInStock;
    
    public:
    //constructor
        MMStock(int , std::string , std::string , int , int , int );
        ~MMStock() = default;//destructor

        int getDepartmentId();
        std::string getCode();
        std::string getNameAndDescription();
        int getUnitPricePounds();
        int getUnitPricePence();
        int getQuantityInStock();

};