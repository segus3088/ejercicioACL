#ifndef GAMESPRIDE_H_INCLUDED
#define GAMESPRIDE_H_INCLUDED

#include <SDL/SDL.h>
#include "GameVector.h"

class GameSprite
{
private:
	GameVector position;
	SDL_Surface *sprite;

public:
	GameSprite();
	~GameSprite();
	
};




#endif //finalizando definición GAMESPRIDE