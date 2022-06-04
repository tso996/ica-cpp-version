#include "mmstock.h"

MMStock::MMStock(int depId, std::string cd, std::string nameAndDesc, int pricePounds, int pricePence, int stock){
    
    departmentId = depId;
    code = cd;
    nameAndDescription = nameAndDesc;
    unitPricePounds = pricePounds;
    unitPricePence = pricePence;
    quantityInStock = stock;
    
}

int MMStock::getDepartmentId(){
    return departmentId;
}

std::string MMStock::getCode(){
    return code;
}

std::string MMStock::getNameAndDescription(){
    return nameAndDescription;
}

int MMStock::getUnitPricePounds(){
    return unitPricePounds;
}

int MMStock::getUnitPricePence(){
    return unitPricePence;
}

int MMStock::getQuantityInStock(){
    return quantityInStock;
}

void MMStock::readMMStockCSV(){
    std::cout<<"reading csv file...\n";
}