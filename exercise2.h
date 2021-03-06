#ifndef EXERCISE2_H
#define EXERCISE2_H
#include<string>
#include <iostream>

using namespace std;

class Singleton
{
public:
static Singleton& instance()        //statyczne metody klasy - wywoływane na rzecz klasy a nie obiektu
{
static Singleton singleton;     // obiekt statyczny
return singleton;               // zwraca referencje dla obiektu statycznego
}
void print(const string& nazwa) { cout<<nazwa<<endl;}

private:
Singleton() {}                 
Singleton(const Singleton&) {}
void operator= (const Singleton&) {}        //operator przypisania - idzie w parze z konstruktorem kopiującym
~Singleton() {}
};

#endif
