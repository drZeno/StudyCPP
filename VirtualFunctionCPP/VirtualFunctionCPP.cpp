#include <iostream>
#include <vector>
using namespace std;

struct Animal {
    virtual ~Animal() = default;        // обязательно виртуальный деструктор!
    virtual void Speak() { cout << "Some generic sound\n"; }
};

struct Dog : Animal {
    void Speak() override { cout << "Woof!\n"; }
};

struct Cat : Animal {
    void Speak() override { cout << "Meow!\n"; }
};

int main() {
    vector<Animal*> world;
    world.push_back(new Dog());
    world.push_back(new Cat());

    for (auto a : world) a->Speak(); // динамически вызовется Dog::Speak и Cat::Speak
    for (auto a : world) delete a;   // правильно удаляем через базовый указатель
}