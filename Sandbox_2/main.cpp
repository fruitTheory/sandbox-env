#include "Entity.h"

int main() {
	// Object created on the stack
	Entity x;
	std::cout << x.GetName() << std::endl;

	// Object created on the heap
	Entity* e = new Entity();
	PrintName(e);
	
}