#include "exercise3.h"
#include <iostream>

using namespace std;

int main()
{
Vector v1;
Vector v2;
v1.dx=2;
v2.dx=5;
v1.dy=-7;
v2.dy=3;
Vector v3=v1+v2;
cout<<v3.dx<<" "<<v3.dy<<endl;

++v3;
cout<<v3.dx<<" "<<v3.dy<<endl;

Vector v4=-v3;
cout<<v4.dx<<" "<<v4.dy<<endl;

return 0;
}
