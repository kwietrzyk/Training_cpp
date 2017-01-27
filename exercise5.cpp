#include "exercise5.h"
#include <iostream>

using namespace std;

Animal*
Animal::create(string type)
{
if(type == "bird") return new Bird;
if(type == "mammal") return new Mammal;
if(type == "reptile") return new Reptile;
return NULL;
}

void Bird::show()
{
cout<<"I am a bird"<<endl;
}

void Mammal::show()
{
cout<<"I am a mammal"<<endl;
}

void Reptile::show()
{
cout<<"I am a reptile"<<endl;
}
