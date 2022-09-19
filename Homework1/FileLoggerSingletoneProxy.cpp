#include "FileLoggerSingletoneProxy.h"

void __fastcall FileLoggerSingletoneProxy::OpenLogFile(const std::string& FN)
{
    logOut.open(FN, std::ios_base::out);
}

void FileLoggerSingletoneProxy::CloseLogFile()
{
    if (logOut.is_open())
    {
        logOut.close();
    }
}

void __fastcall FileLoggerSingletoneProxy::WriteToLog(const std::string& str)
{
    num++;
    logOut << num << ": " << FileLoggerSingletone::getInstance().GetCurDateTime() << " - " << str << std::endl;
}

void __fastcall FileLoggerSingletoneProxy::WriteToLog(const std::string& str, int n)
{
    num++;
    logOut << num << ": " << FileLoggerSingletone::getInstance().GetCurDateTime() << " - " << str << n << std::endl;
}

void __fastcall FileLoggerSingletoneProxy::WriteToLog(const std::string& str, double d)
{
    num++;
    logOut << num << ": " << FileLoggerSingletone::getInstance().GetCurDateTime() << " - " << str << d << std::endl;
}