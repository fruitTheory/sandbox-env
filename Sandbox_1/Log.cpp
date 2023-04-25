#include <iostream>
#include "Log.h"

void Log::SetLevel(Level level) {
	m_logLevel = level;
}

void Log::Error(const char* message) {
	if (m_logLevel >= LevelError)
		std::cout << "[ERROR]" << message << std::endl;
}

void Log::Warn(const char* message) {
	if (m_logLevel >= LevelWarn)
		std::cout << "[WARNING]" << message << std::endl;
}

void Log::Info(const char* message) {
	if (m_logLevel >= LevelInfo)
		std::cout << "[INFO]" << message << std::endl;
}
