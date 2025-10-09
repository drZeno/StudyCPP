#include <iostream>
#include <string>
using namespace std;

class Character
{
public:
     Character();
    ~Character();
    int* CharacterAge;
    float* CharacterHealth;
    
};

int main()
{
    Character* Char = new Character();
    delete Char;


    system ("pause");
}

Character::Character()
{
    cout << "New character was created \n";
    CharacterAge = new int(10);
    CharacterHealth = new float(20.f);
    
}

Character::~Character()
{
    cout << "Character was destroyed \n";
    delete CharacterAge;
    delete CharacterHealth;
}
