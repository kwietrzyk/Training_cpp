#include "exercise6.h"
#include <iostream>

using namespace std;

int main()
{
try {
double a=5;
double b=2;
double c=div(a,b);
cout<<"Wynik dzielenia wynosi: "<<c<<endl;
}
catch (DivisionByZero e)
{
cout<<e.description()<<endl;
}

return 0;
}
