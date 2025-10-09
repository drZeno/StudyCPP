#include <iostream>
#include <string>
using namespace std;

struct Cat
{

    Cat();
    int age;
    float weight;
    string name;
    
    Cat(const string& n="Unnamed", int a=0, float w=0.0f)
      : age(a), weight(w), name(n) 
    {
        cout << "Cat constructor !" << endl;
        Meow();
    }

    void Meow();
};


void Cat::Meow()
{
    cout << "Meow constructor ! My age is " << age << ".\n";
    cout << "Meow weight is ! " << weight << ".\n";
    cout << name << ".\n";
};

Cat::Cat()
{
    age = 1;
    weight = 2.5;
    name = "HelloCat";
    Meow();
}

int main()
{
    Cat cat;
    
}

