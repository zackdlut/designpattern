#ifndef _FILE_LOG_FACTORY_H_
#define _FILE_LOG_FACTORY_H_
#include "LogFactory.h"
#include "FileLog.h"

class FileLogFactory :public LogFactory
{

public:
    FileLogFactory(/* args */);
    virtual ~FileLogFactory();
    virtual Log* createLog();
};

FileLogFactory::FileLogFactory(/* args */)
{
    std::cout<<"Construct FileLogFactory"<<std::endl;
}

FileLogFactory::~FileLogFactory()
{
    std::cout<<"Destruct FileLogFactory"<<std::endl;
}
Log* FileLogFactory::createLog()
{
    std::cout<<"FileLogFactory createLog"<<std::endl;
    return new FileLog();
}

#endif //_FILE_LOG_FACTORY_H_