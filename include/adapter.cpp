#include "adapter.h"

string Adapter:: getProductCode(){
   return instance.getCode();
}

string Adapter::getProductTitle(){
    return instance.getName();

}

string Adapter::getProductDescription(){
    return instance.getDescription();
}

int Adapter::getQuantity(){
    return instance.getQuantityInStock();
}

int Adapter::getUnitPrice(){
    int a = instance.getUnitPricePounds();
    int b = instance.getUnitPricePence();
    float c = b/100;
    int pricePounds = a + (int)c;
    return pricePounds;
}

void Adapter::sellQuantity(int q){
        instance.sellQuantityInStock(q);
}

void Adapter::buyQuantity(int b){
        instance.addQuantityToStock(b);
}