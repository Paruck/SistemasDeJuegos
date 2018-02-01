#pragma once
#include <iostream>
#include <string>

class Creator
{
public:
	Creator* Crear(int value);
	virtual std::string sonido() { return std::string(); }
	Creator();
	~Creator();
};

class Perro : public Creator {
public:
	std::string Sonido() {
		return "Guaaafff";
	}
	Perro(){}
};

class Gato : public Creator {
public:
	std::string Sonido() {
		return "Miaaawwww";
	}
	Gato(){}
};

class Pato : public Creator {
public:
	std::string Sonido() {
		return "Cuuuack";
	}
	Pato(){}
};


