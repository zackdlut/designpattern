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
    Log* d = dlc->createLog();
    d->writeLog("Hi");

    delete flc;
    delete dlc;
    delete f;
    delete d;

    return 0;
}
