#ifndef ME2_H
#define ME2_H

#include <iostream>
#include <string>

class Person
{
    private:
    //class attributes
        std::string name;
        int age;

    public:
    //empty constructor
        Person();
    //non-empty constructor
        Person(std::string inputname, int inputage);
    
    //function to return age
        int getAge();
    
    //function to return name
        std::string getName();
};


#endif