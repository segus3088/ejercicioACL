#include "GameVector.h"
using namespace std;

GameVector::GameVector(){
	this->x = 0.0;
	this->y = 0.0;

}

GameVector::GameVector(double xEntrada, double yEntrada){
	this->x = xEntrada;
	this->y = yEntrada;

}

GameVector::GameVector(const GameVector& obj){
	this->x = obj.x;
	this->y = obj.y;

}

GameVector GameVector::suma(const GameVector& obj1, const GameVector& obj2){

	return GameVector(obj1.x + obj2.x, obj1.y + obj2.y);
}

GameVector GameVector::resta(const GameVector& obj1, const GameVector& obj2){

	return GameVector(obj1.x - obj2.x, obj1.y - obj2.y);
}

void GameVector::mulEscalar(GameVector& obj, double escalar){

	obj.x *= escalar;
	obj.y *= escalar;
}

void GameVector::divEscalar(GameVector& obj, double escalar){

	obj.x /= escalar;
	obj.y /= escalar;	
}

double GameVector::productoPunto(const GameVector& obj1, const GameVector& obj2){

	return ((obj1.x * obj2.y) + (obj1.x * obj2.y));
}

