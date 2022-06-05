#include "bbstock.h"

BBStock::BBStock(string a, string b , string c, int x, int y){
    productCode = a;
    productTitle = b;
    productDescription = c;
    unitPrice = x;
    quantity = y;
}

string BBStock::getProductCode(){
        return productCode;
}

string BBStock::getProductTitle(){
        return productTitle;
}

string BBStock::getProductDescription(){
        return productDescription;
}

int BBStock::getUnitPrice(){
        return unitPrice;
}

int BBStock::getQuantity(){
        return quantity;
}