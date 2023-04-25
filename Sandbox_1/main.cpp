#include <iostream>
#include "c_math.h"
#include "Log.h"
#include "Log_old.h"


int main() {

	//Log debugger
	Log log;
	log.SetLevel(Log::LevelInfo);
	log.Error("Log Error");
	log.Warn("Log Warning");
	log.Info("Log Info");

	// For loop test
	std::string hey = "Hello";
	for (char x : hey) {
		std::cout << x << std::endl;
	}

	// Basic logging
	Log_old("Hello Old Log! ");

	// Standard string test
	std::string standard = "This is a Standard String";
	std::cout << standard << std::endl;

	// Pulled from multiply implementation and header
	MultipyCalc(3, 2);
	MultipyCalc(9, 2);
	MultipyCalc(6, 2);

	// Pointer stuff
	int a = 5;
	Increment(a);
	void* point = nullptr;
	std::cout << a << std::endl;

}