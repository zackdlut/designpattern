#ifndef _DATABASE_LOG_H_
#define _DATABASE_LOG_H_
#include "Log.h"

class DatabaseLog :public Log
{
private:
    /* data */
public:
    DatabaseLog(/* args */);
    virtual ~DatabaseLog();
    virtual void writeLog(std::string log);
};

DatabaseLog::DatabaseLog(/* args */)
{
    std::cout<<"Construct DatabaseLog"<<std::endl;
}
DatabaseLog::~DatabaseLog()
{
    std::cout<<"Destruct DatabaseLog"<<std::endl;
}
void DatabaseLog::writeLog(std::string log)
{
    std::cout<<"write ["<<log<<"] Log to Database"<<std::endl;
}

#endif //_DATABASE_LOG_H_