#ifndef _PRODUCT_A_H_
#define _PRODUCT_A_H_
#include "Product.h"
#include <iostream>
class ProductA : public Product
{

public:
    ProductA(){ std::cout<<"Construct ProductA"<<std::endl;}
    ~ProductA() { std::cout<<"Destruct ProductA"<<std::endl;}
    void showUsage() {std::cout<<"This is the usage of ProductA"<<std::endl;}
};

#endif //_PRODUCT_A_H_