#ifndef _LOG_H_
#define _LOG_H_
#include<iostream>
class Log
{
public:
    Log();
    virtual ~Log();
    virtual void writeLog(std::string log)  = 0;
};

Log::Log()
{
    std::cout<<"Construct Base Log"<<std::endl;
}
Log::~Log()
{
    std::cout<<"Destruct Base Log"<<std::endl;
}

#endif //_LOG_H_