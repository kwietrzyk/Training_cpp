#ifndef EXERCISE6_H
#define EXERCISE6_H
#include <string>

using namespace std;

class DivisionByZero
{
public:
string description();
};

double div(const double& a, const double& b)throw(DivisionByZero);	//tworzony jest obiekt, ktory w main jest przechwytywany

#endif
