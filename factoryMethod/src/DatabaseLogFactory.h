#ifndef _DATABASE_LOG_FACTORY_H_
#define _DATABASE_LOG_FACTORY_H_
#include "LogFactory.h"
#include "DatabaseLog.h"

class DatabaseLogFactory :public LogFactory
{

public:
    DatabaseLogFactory(/* args */);
    virtual ~DatabaseLogFactory();
    virtual Log* createLog();
};

DatabaseLogFactory::DatabaseLogFactory(/* args */)
{
    std::cout<<"Construct DatabaseLogFactory"<<std::endl;
}

DatabaseLogFactory::~DatabaseLogFactory()
{
    std::cout<<"Destruct DatabaseLogFactory"<<std::endl;
}
Log* DatabaseLogFactory::createLog()
{
    std::cout<<"DatabaseLogFactory createLog"<<std::endl;
    return new DatabaseLog();
}

#endif //_DATABASE_LOG_FACTORY_H_