#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    Animal(const string& name = "Unknown", int age = 1)
    : Name(name), Age(age)
    {
        cout << "Animal " << Name << " is born !\n";
    }

    virtual void Speak()
    {
        cout << Name << " speaks!\n";
    }

protected:
    string Name;
    int Age;
};

class Dog : public Animal
{
public:
    Dog(const string& name = "Doggy", int age = 1, float health = 100.0f)
        : Animal(name,age), Health(health)
    {
        cout << "Dog " << Name << " is ready to play ! Health = " << health << endl;
    }
    
    void Speak() override
    {
        cout << Name << " says: Woof!\n";
    }
    void TakeDamage(float amount)
    {
        Health -= amount;
        cout << Name << " takes " << amount << " damage. Health now = " << Health << endl;
    }

private:
    float Health;
};

int main()
{
    Animal genericAnimal("SomeAnimal", 5);
    Dog spot("Spot", 3, 80.0f);

    cout << "\n--- Sounds ---\n";
    genericAnimal.Speak();  // вызов базового метода
    spot.Speak();           // вызов переопределённого метода Dog

    cout << "\n--- Combat ---\n";
    spot.TakeDamage(20.5f);

    return 0;
}

