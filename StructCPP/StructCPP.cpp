#include <iostream>
#include <string>
using namespace std;

struct LocationVector
{
    float x;
    float y;
    float z;
};

struct Player
{
    float health;
    int strength;
    float defense;
    int Level;

    LocationVector Location = {0.f,0.f,0.f};
    
    void TakeDamage(float dmg)
    {
        health -= dmg;
    }
    int GetLevel()
    {
        return Level;
    }

    void DisplayLocation()
    {
        cout << "Location.X = " << Location.x << endl;
        cout << "Location.Y = " << Location.y << endl;
        cout << "Location.Z = " << Location.z << endl;
    }
};

int main()
{
    Player Pint;
    Pint.health = 100.f;
    Pint.strength = 10;
    Pint.defense = 5.f;
    Pint.Level = 1;
    Pint.DisplayLocation();


    Player Pint2 = {50.f,8,4.f,5,{5,3,2}};
    Pint2.DisplayLocation();
}