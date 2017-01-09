#ifndef EXERCISE3_H
#define EXERCISE3_H
#include<string>
#include <iostream>

using namespace std;

struct Vector
{
double dx, dy;

Vector operator+(const Vector& vector);     //operator+ dodaje do siebie 2 argumenty

void operator++();

Vector operator-();
};



#endif
