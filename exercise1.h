#ifndef EXERCISE1_H
#define EXERCISE1_H
#include<string>

using namespace std;

class Person
{
public:
    Person(const string& firstName, const string& surname);
    Person(const Person& person);
    Person();
    ~Person();
    string fullName();
    int age();
    void operator++();
private:
    string _firstName;
    string _surname;
    int _age;
};

#endif
