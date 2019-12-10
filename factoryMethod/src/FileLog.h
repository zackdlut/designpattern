#ifndef _FILE_LOG_H_
#define _FILE_LOG_H_
#include "Log.h"

class FileLog :public Log
{
public:
    FileLog();
    virtual ~FileLog();
    virtual void writeLog(std::string log);
};

FileLog::FileLog(/* args */)
{
    std::cout<<"Construct FileLog"<<std::endl;
}
FileLog::~FileLog()
{
    std::cout<<"Destruct FileLog"<<std::endl;
}
void FileLog::writeLog(std::string log)
{
    std::cout<<"write ["<<log<<"] Log to file"<<std::endl;
}

#endif //_FILE_LOG_H_