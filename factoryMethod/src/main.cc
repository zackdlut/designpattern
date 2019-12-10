#include<iostream>
#include "LogFactory.h"
#include "DatabaseLogFactory.h"
#include "FileLogFactory.h"
#include "Log.h"

int main(int argc, char const *argv[])
{
    LogFactory *flc = new FileLogFactory();
    LogFactory *dlc = new DatabaseLogFactory();

    Log* f = flc->createLog();
    f->writeLog("Hello");
    flc->freeLog(f);
    Log* d = dlc->createLog();
    d->writeLog("Hello");
    dlc->freeLog(d);

    if(f == NULL)
    {
        std::cout<<"f is freed"<<std::endl;
    }
    if(d == NULL)
    {
        std::cout<<"d is freed"<<std::endl;
    }

    delete flc;
    delete dlc;

    return 0;
}
