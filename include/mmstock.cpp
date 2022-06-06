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

std::string MMStock::getName() {
        return nameAndDescription.substr(0, 50);
    }
    
    
std::string MMStock::getDescription() {
        return nameAndDescription.substr(49);
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
