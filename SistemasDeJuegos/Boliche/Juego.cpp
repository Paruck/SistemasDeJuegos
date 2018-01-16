#include "Juego.h"



void Juego::tiro(int bolos)
{
	tiros[tiroActual++] = bolos;
}

int Juego::variosTiros(int tiros, int bolos)
{
	for (int i = 0; i < tiros; i++) {
		tiro(bolos);
	}
	return finalScore();
}

int Juego::finalScore()
{
	int indiceDeTiros = 0; 

	for (int Cuadros = 0; Cuadros < 10; Cuadros++) {
		if (tiros[indiceDeTiros] + tiros[indiceDeTiros + 1] == 10)
		{
			score += 10 + tiros[indiceDeTiros + 2];
			indiceDeTiros += 2;
		}
		else if (tiros[indiceDeTiros] == 10) {
			score += 10 + tiros[indiceDeTiros + 1] + tiros[indiceDeTiros + 2];
			indiceDeTiros++;
		}
		else {
			score += tiros[indiceDeTiros];
			indiceDeTiros++;
		}
	}
	return score;
}

Juego::Juego()
{
}


Juego::~Juego()
{
}
