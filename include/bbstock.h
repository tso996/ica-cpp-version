#include<iostream>
#include<string.h>

using namespace std;

class BBStock{
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

};