#ifndef _FACTORY_H_
#define _FACTORY_H_
#include "Product.h"
#include "ProductA.h"
#include "ProductB.h"

class Factory
{
public:
    Factory(/* args */);
    ~Factory();
    static Product* createProduct(std::string type)
    {
        if (type == "A")
        {
            return new ProductA();
        }
        else if(type == "B")
        {
            return new ProductB();
        }
    }
    static void freeProduct(Product* &p)
    {
        if (p != NULL)
        {
            delete p;
            p = NULL;
        }
    }
};

Factory::Factory(/* args */)
{
}

Factory::~Factory()
{
}



#endif //_FACTORY_H_