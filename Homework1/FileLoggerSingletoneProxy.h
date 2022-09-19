#include "FileLoggerSingletone.h"
#include "LoggerSingletone.h"

#include <fstream>

class FileLoggerSingletoneProxy : public LoggerSingletone
{
private:
	std::string line;
	int num = 0;
	FileLoggerSingletone* fileLog;
	FileLoggerSingletoneProxy() {};
	FileLoggerSingletoneProxy(const FileLoggerSingletoneProxy& ss) = delete;
	FileLoggerSingletoneProxy& operator=(const FileLoggerSingletoneProxy&) = delete;

public:
	static FileLoggerSingletoneProxy& getInstance()
	{
		static FileLoggerSingletoneProxy theProxyInstance;
		return theProxyInstance;
	}
	void __fastcall OpenLogFile(const std::string& FN);
	void CloseLogFile();
	void __fastcall WriteToLog(const std::string& str);
	void __fastcall WriteToLog(const std::string& str, int n);
	void __fastcall WriteToLog(const std::string& str, double d);
};
