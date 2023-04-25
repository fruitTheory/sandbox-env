#pragma once
#include <iostream>


class Log {
public:
	enum Level : unsigned char{
		LevelError = 0, LevelWarn, LevelInfo
	};
	//const int LogLevelError = 0;
	//const int LogLevelWarning = 1;
	//const int LogLevelInfo = 2;

private:
	Level m_logLevel;
public:

	void SetLevel(Level level);

	void Error(const char* message);
	void Warn(const char* message);
	void Info(const char* message);

};