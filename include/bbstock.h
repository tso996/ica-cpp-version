#ifndef _BBSTOCKS_
#define _BBSTOCKS_

#include<iostream>
#include<string.h>
#include "base.h"

using namespace std;

class BBStock: public BaseStock{
    private:
        string productCode;
        string productTitle;
        string productDescription;
        int unitPrice;
        int quantity;
    
    public:
        BBStock(string, string, string, int, int);
        ~BBStock() = default;
        string getProductCode();
        string getProductTitle();
        string getProductDescription();
        int getUnitPrice();
        int getQuantity();
        void sellQuantity(int);
        void buyQuantity(int);

};
#endif