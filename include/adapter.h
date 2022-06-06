#ifndef ADAPTERS
#define ADAPTERS

#include "bbstock.h"
#include "mmstock.h"
#include "base.h"


//adapts mmstock to bbstock
class Adapter: public BaseStock
{
    private:
        MMStock& instance;
    public:
        Adapter(MMStock& a): instance (a){};
        ~Adapter() = default;
        string getProductCode();
        string getProductTitle();
        string getProductDescription();
        int getUnitPrice();
        int getQuantity();
};

#endif

