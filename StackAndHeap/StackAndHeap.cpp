#include <iostream>
#include <string>
using namespace std;

struct Character
{
    void PrintLevel();
    string Name;
    int level;
};

int weight = 5;
int height = 10;

void Character::PrintLevel()
{
    cout<<"Level: "<< level << endl;
}

int main()
{
    
    Character* PtrToChar = new Character();
    cout << PtrToChar->Name;
    cout << PtrToChar->level << endl;
    PtrToChar->PrintLevel();
}