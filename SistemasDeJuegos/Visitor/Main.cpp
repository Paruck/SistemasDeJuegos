#include "Visitor.h"
int main() {
	Element *list[] =
	{
		new This(), new That(), new TheOther()
	};
	UpVisitor up;
	DownVisitor down; 
	for (int i = 0; i < 3; i++)
		list[i]->accept(up);

	for (int i = 0; i < 3; i++)
		list[i]->accept(down);
	system("Pause");
	return 0;
}