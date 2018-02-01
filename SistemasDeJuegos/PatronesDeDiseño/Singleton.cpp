#include "Singleton.h"

Singleton* Singleton::Instance = nullptr;

Singleton::Singleton()
{
}


Singleton * Singleton::getInstance()
{
	if (Instance == nullptr)
		Instance = new Singleton();

	return Instance;
}

Singleton::~Singleton()
{
	delete Instance;
}
