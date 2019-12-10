#include "Product.h"
#include "Factory.h"

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Factory f;
    Product* a = f.createProduct("A");
    Product* b = f.createProduct("B");
    a->showUsage();
    b->showUsage();
    f.freeProduct(a);
    f.freeProduct(b);
    return 0;
}

