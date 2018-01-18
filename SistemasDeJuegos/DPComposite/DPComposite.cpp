// DPComposite.cpp: define el punto de entrada de la aplicación de consola.
//
#include "Graphic.h"

int main()
{
	int		index = 0;
	time_t	tiempo = 9;

	Picture*	newPicture = new Picture();
	Line*		newLine = new Line();
	Rectangle*	newRectangle = new Rectangle();
	Text*		newText = new Text();

	newPicture->Add(newLine);
	newPicture->Add(newRectangle);
	newPicture->Add(newText);
	//newPicture->Add(newPicture);


	srand((unsigned)time(&tiempo));

	for (int i = 0; i < 15; ++i) {

		index = rand()%4;

		switch(index)
		{
		case(0):
			newLine->Draw();
			break;
		case(1):
			newRectangle->Draw();
			break;
		case (2):
			newText->Draw();
			break;
		case(3):
			newPicture->Draw();
			break;
		}
	}
	system("Pause");
    return 0;
}

