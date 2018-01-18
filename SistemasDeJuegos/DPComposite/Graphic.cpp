#include "Graphic.h"



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
	/*graficos.erase(std::remove(graficos.begin(), graficos.end(), g), graficos.end());*/
}

Graphic Picture::getChild(int i)
{
	return Graphic();
}
