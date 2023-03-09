#include "me2.h"

Person::Person()
{
    name="John Doe";
    age=0;
}

Person::Person(std::string inputname, int inputage)
{
    name=inputname;
    age=inputage;
}

int Person::getAge()
{
    return age;
}

std::string Person::getName()
{
    return name;
}