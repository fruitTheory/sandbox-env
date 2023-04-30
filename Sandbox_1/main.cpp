#include <iostream>
#include "c_math.h"
#include "Log.h"
#include "Log_old.h"
#include "Entity.h"


int main() {
	// So you can initialize via contructor parameters
	//Entity e;
	Entity e(9.0, 5.0);
	e.p_entity();
	e.Print();

	// Fat entity inherits Entity
	std::cout << "Size of Entity: " << sizeof(Entity) << std::endl;
	std::cout << "Size of Entity: " << sizeof(FatEntity) << std::endl;

	FatEntity Fat;
	Fat.Print();

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
	std::cout << standard.length() << "\n";

	// Pulled from multiply implementation and header
	MultipyCalc(3, 2);
	MultipyCalc(9, 2);
	MultipyCalc(6, 2);

	// Pointer stuff
	int w = 19;
	int* px = &w;
	std::cout << px << "\n" << *px << "\n" << &w << "\n" << w << "\n";
	void* pointx = nullptr;

	// If-else shorthand
	int z = 2;
	int num = (z < 3) ? 5 : 1;
	std::cout << num << "\n";

	// Arrays
	char word[] = "loaded";
	printf( "word:%s, length:%d, size%d \n",
		word,
		strlen(word),
		sizeof(word) );

	// If int is 4 bytes and array is 20 bytes theres 5 elements in the array -> 20/4 = 5(ints)
	int myArray[] = { 10, 20, 30, 40, 50 };
	std::cout << sizeof(myArray) << "\n";
	std::cout << sizeof(int) << "\n";
}