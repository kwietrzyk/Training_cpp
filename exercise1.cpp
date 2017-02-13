#include "exercise1.h"
#include <iostream>

using namespace std;

Person::Person(const string& firstName, const string& surname)     
{
_firstName=firstName;
_surname=surname;
_age=0;

cout<<_firstName<<" "<<_surname<<" "<<_age<<endl;
}

Person::Person(const Person& person)
{
_firstName=person._firstName;
_surname=person._surname;
_age=person._age;

cout<<_firstName<<" "<<_surname<<" "<<_age<<endl;
}

Person::Person()
{
_firstName="default";
_surname="nazwisko";
_age=0;

cout<<_firstName<<" "<<_surname<<" "<<_age<<endl;
}

Person::~Person()
{
cout<<"Destroying..."<<endl;
} 

string Person::fullName()
{
return _firstName+" "+_surname;
}

int Person::age()
{
return _age;
}

void Person::operator++()
{
_age++;
}


