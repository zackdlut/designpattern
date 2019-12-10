#ifndef _LOG_FACTORY_H_
#define _LOG_FACTORY_H_
#include "Log.h"

class LogFactory
{
private:
    /* data */
public:
    LogFactory(/* args */);
    virtual ~LogFactory();
    virtual Log* createLog() = 0;
};

LogFactory::LogFactory(/* args */)
{
    std::cout<<"Construct Base LogFactory"<<std::endl;
}

LogFactory::~LogFactory()
{
    std::cout<<"Destruct Base LogFactory"<<std::endl;
}



#endif //_LOG_FACTORY_H_