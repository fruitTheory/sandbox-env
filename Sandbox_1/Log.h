#pragma once
#include <iostream>


class Log {
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

private:
	int m_logLevel;
public:

	void SetLevel(int level);

	void Error(const char* message);
	void Warn(const char* message);
	void Info(const char* message);

};