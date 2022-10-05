#pragma once
#include <conio.h>
#include <windows.h>
#include <stdint.h>
#include <time.h> 

#include <string>
#include <iostream>
#include <fstream>
#include <chrono>

class FileLoggerSingletone
{
public:
		static FileLoggerSingletone& getInstance()
		{
			static FileLoggerSingletone theSingleInstance;
			return theSingleInstance;
		}
		void __fastcall OpenLogFile(const std::string& FN);
		void CloseLogFile();
		std::string GetCurDateTime();
		void __fastcall WriteToLog(const std::string& str);
		void __fastcall WriteToLog(const std::string& str, int n);
		void __fastcall WriteToLog(const std::string& str, double d);
private:
	FileLoggerSingletone() {};
	FileLoggerSingletone(const FileLoggerSingletone& root) = delete;
	FileLoggerSingletone& operator=(const FileLoggerSingletone&) = delete;
	std::ofstream logOut;
};

