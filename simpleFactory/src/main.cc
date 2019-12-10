#include "Product.h"
#include "Factory.h"

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Factory f;
    Product* a = Factory::createProduct("A");
    Product* b = Factory::createProduct("B");
    a->showUsage();
    b->showUsage();
    Factory::freeProduct(a);
    Factory::freeProduct(b);
    return 0;
}

