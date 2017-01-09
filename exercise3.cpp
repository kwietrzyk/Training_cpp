#include "exercise3.h"
#include <iostream>

using namespace std;

Vector Vector::operator+(const Vector& vector)       //typ zwracany, nazwa stuktury, metoda
{
Vector sum;
sum.dx=dx+vector.dx;
sum.dy=dy+vector.dy;
return sum;
}

void Vector::operator++()
{
dx+=1;
dy+=1;
}

Vector Vector::operator-()
{
Vector turn;
turn.dx=-dx;
turn.dy=dy;
return turn;
}
