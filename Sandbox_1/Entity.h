#pragma once
#include <iostream>


class Entity
{
public:

	float x, y;

	// Constructor to init class data members
	Entity(float X, float Y) {
		std::cout << "Entity Constructed" << std::endl;
		x = X, y = Y; };

	// Delete default C++ constructor 
	//Entity() = delete;

	// Destructor cleans memory that constructor creates
	// It is good practice to define a destructor for any class that manages resources
	~Entity() {
		std::cout << "Entity Destructed" << std::endl;
	}

	void p_entity() {
		std::cout << "Entity" << std::endl;
	}
	void Print() {
		std::cout << x << " " << y << std::endl;
	}

private:
	// Make only able ot Entity::Print()
	//Entity() { x = 0, y = 0; };
};