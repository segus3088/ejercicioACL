#include "GameVector.h"
using namespace std;

GameVector::GameVector(){
	this.x = 0.0;
	this.y = 0.0;

}

GameVector::GameVector(double xEntrada, double yEntrada){
	this.x = xEntrada;
	this.y = yEntrada;

}

GameVector::GameVector(GameVector obj){
	this.x = obj.x;
	this.y = obj.y;

}