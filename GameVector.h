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
	void suma(const GameVector& obj1, const GameVector& obj2);
	void resta(const GameVector& obj1, const GameVector& obj2);
	void mulEscalar(const GameVector& obj, double escalar);//multiplicación de un vector por un escalar
	void divEscalar(const GameVector& obj, double escalar);//Divición de un vector por un escalar
	void productoPunto(const GameVector& obj1, const GameVector& obj2);


private:
	double x, y;
	
};


#endif //finalizando definición GAMEVECTOR