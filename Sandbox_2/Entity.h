#pragma once
#include <iostream>
#include <string>

#define string std::string

class Entity
{
public:
	string GetName() { return "Entity"; }

private:

};

class Player : public Entity
{
public:
	// Constructor to specify name 
	Player(const string& name) : m_Name(name) {}

	string GetName() { return m_Name; }

private:
	string m_Name;
};

void PrintName(Entity* entity) {
	std::cout << entity->GetName() << std::endl;
}