#include "exercise5.h"
#include <iostream>

using namespace std;

int main() {

string type;

cout<<"Podaj typ zwierzecia bird/mammal/reptile: "<<endl;
cin>>type;

Animal* animal=Animal::create(type);	//wywolanie metody statycznej

if (animal!=NULL)
{
animal->show();
delete animal;
}



return 0;
}
