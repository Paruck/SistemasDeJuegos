
#include "CppUnitTest.h"
#include "..\Boliche\Juego.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PruebaBoliche
{		
	TEST_CLASS(UnitTest1)
	{
	private:
		Juego * miJuego;
	public:
		
		TEST_METHOD_INITIALIZE(InicializarJuego) {
			miJuego = new Juego();
		}

		TEST_METHOD(puedoTirar) {
			miJuego->tiro(0);
			Assert::AreEqual(0, miJuego->finalScore());
		}

		TEST_METHOD(malJuego){
			miJuego->variosTiros(21,0);
			Assert::AreEqual(0,miJuego->finalScore());
		}

		TEST_METHOD(Spare) {
			miJuego->tiro(7);
			miJuego->tiro(3);
			miJuego->tiro(4);
			miJuego->tiro(2);
			Assert::AreEqual(20, miJuego->finalScore());
		}

		TEST_METHOD(Strike) {
			miJuego->tiro(10);
			miJuego->tiro(3);
			miJuego->tiro(6);
			Assert::AreEqual(28, miJuego->finalScore());
		}

		TEST_METHOD(variosStrikes) {
			miJuego->tiro(10);
			miJuego->tiro(10);
			miJuego->tiro(4);
			miJuego->tiro(2);
			Assert::AreEqual(46, miJuego->finalScore());
		}

	};
}