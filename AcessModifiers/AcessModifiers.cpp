#include <iostream>
#include<string>
using namespace std;

class Creature
{
    public:
    Creature();

    string GetName();
    void SetName(string name);
    int GetAge();
    void SetAge(int Age);
    
private:
    string Name;
    int Age;
};

int main()
{
    Creature Cat;
    
    Cat.SetName("KATTY");
    Cat.SetAge(10);
    
    cout << "My Age is : " << Cat.GetAge() << endl;
    cout << "Name: " << Cat.GetName() << endl;
    
    
    
}

// Set and Get name/age functions for access private class Creature
void Creature::SetAge(int age)
{
    if (age >= 0 && age < 1000)
        Age = age;
    else
        cout << "Error: unrealistic age!\n";
}

int Creature::GetAge()
{
    return Age;
}

void Creature::SetName(string name)
{
    Name = name;
}

string Creature::GetName()
{
    return Name;
}


Creature::Creature()
{
    
    cout << "Creature created" << endl;
}
