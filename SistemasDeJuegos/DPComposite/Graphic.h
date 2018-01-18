#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

class Graphic
{
public:
	virtual void Draw();
	virtual void Add(Graphic*){}
	virtual void Remove(Graphic*){}
	virtual Graphic getChild(int) { return Graphic(); }
	Graphic();
	~Graphic();
};

class Line : public Graphic {
public:
	void Draw();
	Line(){}
};

class Rectangle : public Graphic {
public:
	void Draw();
	Rectangle(){}
};

class Text : public Graphic {
public:
	void Draw();
	Text(){}
};

class Picture : public Graphic {
private:
	std::vector<Graphic*> graficos;
public:
	void Draw();
	void Add(Graphic* g);
	void Remove(Graphic* g);
	Graphic getChild(int);
	Picture(){}
};