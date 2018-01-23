#include "Visitor.h"



void This::accept(Visitor &v)
{
	v.visit(this);
}

void That::accept(Visitor &v)
{
	v.visit(this);
}

void TheOther::accept(Visitor &v)
{
	v.visit(this);
}