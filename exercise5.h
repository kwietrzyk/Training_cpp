#ifndef EXERCISE5_H
#define EXERCISE5_H
#include<string>

using namespace std;

struct Animal
{
virtual void show() = 0;
static Animal* create(string type);
};

class Bird:public Animal
{
void show();	//jesli nie przeciaze to bedzie abstrakcyjna i nie bedzie mozna tworzyc instancji
};

class Mammal:public Animal
{
void show();
};

class Reptile:public Animal
{
void show();
};


#endif
