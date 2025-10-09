#include <iostream>
#include <string>
using namespace std;

struct Cat
{
    Cat();

    int age;
    float weight;
    string name;
    
    void Meow();
    
};

void Cat::Meow()
{
    cout << "Meow constructor ! My age is " << age << ".\n";
    cout << "Meow weight is ! " << weight << ".\n";
    cout << "HELLO ! " << ".\n";
};

Cat::Cat()
{
    cout << "Cat constructor !" << endl;
    age = 1;
    weight = 2.5;
    name = "HelloCat";
    Meow();
}

int main()
{
    Cat cat;
    
}

