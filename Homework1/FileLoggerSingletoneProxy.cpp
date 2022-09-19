#include "FileLoggerSingletoneProxy.h"

void __fastcall FileLoggerSingletoneProxy::OpenLogFile(const std::string& FN)
{
    fileLog->getInstance().OpenLogFile(FN);
}

void FileLoggerSingletoneProxy::CloseLogFile()
{
    fileLog->getInstance().CloseLogFile();
}

void __fastcall FileLoggerSingletoneProxy::WriteToLog(const std::string& str)
{
    num++;
    line = std::to_string(num) + ": " + fileLog->getInstance().GetCurDateTime() + " - " + str;
    fileLog->getInstance().WriteToLog(line);
}
void __fastcall FileLoggerSingletoneProxy::WriteToLog(const std::string& str, int n)
{
    num++;
    line = std::to_string(num) + ": " + fileLog->getInstance().GetCurDateTime() + " - " + str;
    fileLog->getInstance().WriteToLog(line, n);
}
void __fastcall FileLoggerSingletoneProxy::WriteToLog(const std::string& str, double d)
{
    num++;
    line = std::to_string(num) + ": " + fileLog->getInstance().GetCurDateTime() + " - " + str;
    fileLog->getInstance().WriteToLog(line, d);
}