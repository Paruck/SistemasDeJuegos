#include "Graphic.h"
#include <ctime>


void Graphic::Draw()
{
	std::cout << "Se dibujo un grafico\n";
}

Graphic::Graphic()
{
}


Graphic::~Graphic()
{
}

void Line::Draw()
{
	std::cout << "Se dibujo una linea\n";
}

void Rectangle::Draw()
{
	std::cout << "Se dibujo un rectangulo\n";
}

void Text::Draw()
{
	std::cout << "Se dibujo un texto\n";
}

void Picture::Draw()
{
	for (std::vector<Graphic*>::const_iterator iter = graficos.begin(); iter != graficos.end(); ++iter)
	{
		if (*iter != 0)
		{
			(*iter)->Draw();
		}
	}

}

void Picture::Add(Graphic* g)
{
	graficos.push_back(g);
}

void Picture::Remove(Graphic* g)
{
	for (auto& persona : graficos) {
		if(persona == g){
			graficos.pop_back();
		}
	}
}

Graphic Picture::getChild(int i)
{
	return Graphic();
}

Picture::Picture()
{
	srand(time(NULL));
	for (int i = 0; i < 3; ++i) {
		Graphic* Imagen = nullptr;
		int index = rand() % 4;
		switch (index)
		{
		case(0):
			Imagen = new Line();
			break;
		case(1):
			Imagen = new Rectangle();
			break;
		case (2):
			Imagen = new Text();
			break;
		case(3):
			Imagen = new Picture();
			break;
		}
		graficos.push_back(Imagen);
	}
}

Picture::Picture(Graphic * g)
{
	graficos.push_back(g);
}
