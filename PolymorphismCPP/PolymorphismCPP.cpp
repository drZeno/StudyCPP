#include <iostream>
using namespace std;

class Object
{
public:
    virtual void BeginPlay();
};

class Actor : public Object
{
public:
    virtual void BeginPlay() override;
};

class Pawn : public Actor
{
public:
    virtual void BeginPlay() override;
};

void Object::BeginPlay()
{
    cout << "Object::BeginPlay" << endl;
}

void Actor::BeginPlay()
{
    cout << "Actor::BeginPlay" << endl;
}

void Pawn::BeginPlay()
{
    cout << "Pawn::BeginPlay" << endl;
}

int main()
{

    Object* obj = new Object;
    Actor* act = new Actor;
    Pawn* pwn = new Pawn;

    Object* ObjArray[] = {obj, act ,pwn};

    for (int i = 0; i < 3; i++)
    {
        ObjArray[i]->BeginPlay();
    }
        
        
    delete obj;
    delete act;
    delete pwn;
    
}

