#pragma once
class Juego
{
private:
	int tiros[21] = { 0 };
	int score = 0;
	int tiroActual = 0;
public:
	void tiro(int bolos);
	int variosTiros(int tiros, int bolos);
	int finalScore();
	Juego();
	~Juego();
};

