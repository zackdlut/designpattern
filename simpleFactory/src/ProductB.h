#ifndef _PRODUCT_B_H_
#define _PRODUCT_B_H_
#include "Product.h"
#include <iostream>
class ProductB : public Product
{

public:
    ProductB(){ std::cout<<"Construct ProductB"<<std::endl;}
    ~ProductB() { std::cout<<"Destruct ProductB"<<std::endl;}
    void showUsage() {std::cout<<"This is the usage of ProductB"<<std::endl;}
};

#endif //_PRODUCT_B_H_