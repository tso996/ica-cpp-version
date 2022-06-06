#ifndef _BASE_
#define _BASE_

#include<iostream>
#include<string.h>

using namespace std;

class BaseStock{
    private:
        string productCode;
        string productTitle;
        string productDescription;
        int unitPrice;
        int quantity;
    
    public:
        virtual string getProductCode(){};
        virtual string getProductTitle(){};
        virtual string getProductDescription(){};
        virtual int getUnitPrice(){};
        virtual int getQuantity(){};

};
#endif