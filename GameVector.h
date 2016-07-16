#ifndef GAMEVECTOR_H_INCLUDED
#define GAMEVECTOR_H_INCLUDED

#include <SDL/SDL.h>

class GameVector
{
public:
	//constructores
	GameVector();
	GameVector(double xEntrada, double yEntrada);
	GameVector(const GameVector& obj);
	~GameVector();

	//metodos
	GameVector suma(const GameVector& obj1, const GameVector& obj2);
	GameVector resta(const GameVector& obj1, const GameVector& obj2);
	void mulEscalar(GameVector& obj, double escalar);//multiplicación de un vector por un escalar
	void divEscalar(GameVector& obj, double escalar);//Divición de un vector por un escalar
	double productoPunto(const GameVector& obj1, const GameVector& obj2);


private:
	double x, y;
	
};


#endif //finalizando definición GAMEVECTOR