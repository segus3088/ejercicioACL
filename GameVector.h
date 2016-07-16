#ifndef GAMEVECTOR_H_INCLUDED
#define GAMEVECTOR_H_INCLUDED

#include <SDL/SDL.h>

class GameVector
{
public:
	GameVector();
	GameVector(double xEntrada, double yEntrada);
	GameVector(GameVector obj);
	~GameVector();

private:
	double x, y;
	
};


#endif //finalizando definición GAMEVECTOR