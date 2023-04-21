#include <iostream>
#include "Log.h"

void Log::SetLevel(int level) {
	m_logLevel = level;
}

void Log::Error(const char* message) {
	if (m_logLevel >= LogLevelError)
		std::cout << "[ERROR]" << message << std::endl;
}

void Log::Warn(const char* message) {
	if (m_logLevel >= LogLevelWarning)
		std::cout << "[WARNING]" << message << std::endl;
}

void Log::Info(const char* message) {
	if (m_logLevel >= LogLevelInfo)
		std::cout << "[INFO]" << message << std::endl;
}
