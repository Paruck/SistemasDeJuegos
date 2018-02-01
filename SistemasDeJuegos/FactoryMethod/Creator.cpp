#include "Creator.h"


Creator * Creator::Crear(int value)
{
	if(value == 0){
		return new Perro();
	}
	else if (value == 1) {
		return new Gato();
	}
	else if (value == 2) {
		return new Pato();
	}
	else{
		return nullptr;
	}

}

Creator::Creator()
{
}


Creator::~Creator()
{
}
