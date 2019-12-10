#ifndef _PRODUCT_H_
#define _PRODUCT_H_
#include<iostream>
class Product
{
public:
    virtual ~Product() {}
    Product() {std::cout<<"Construct Product"<<std::endl;}
    virtual void showUsage() = 0;
};

#endif //_PRODUCT_H_