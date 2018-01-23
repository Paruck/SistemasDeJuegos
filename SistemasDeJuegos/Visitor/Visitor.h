#pragma once
#include <string>
#include <iostream>

class Element
{
public:
	virtual void accept(class Visitor &v) = 0;
};

class This : public Element
{
public:
	void accept(Visitor &v);
	inline std::string thiss()
	{
		return "Esto! ";
	}
};

class That : public Element
{
public:
	void accept(Visitor &v);
	inline std::string that()
	{
		return "Eso! ";
	}
};

class TheOther : public Element
{
public:
	void accept(Visitor &v);
	inline std::string theOther()
	{
		return "El otro! ";
	}
};


class Visitor
{
public:
	virtual void visit(This *e) = 0;
	virtual void visit(That *e) = 0;
	virtual void visit(TheOther *e) = 0;
};


class UpVisitor : public Visitor
{
	void visit(This *e)
	{
		std::cout << e->thiss() << '\n';
	}
	void visit(That *e)
	{
		std::cout << e->that() << '\n';
	}
	void visit(TheOther *e)
	{
		std::cout << e->theOther() << '\n';
	}
};

class DownVisitor : public Visitor
{
	void visit(This *e)
	{
		std::cout << e->thiss() << '\n';
	}
	void visit(That *e)
	{
		std::cout << e->that() << '\n';
	}
	void visit(TheOther *e)
	{
		std::cout << e->theOther() << '\n';
	}
};