#include <iostream>
#include <string>
using namespace std;

class Dog
{
    string Name;
    int Age;
    float Health;

    void Bark()
    {
        cout << "Bark" << endl;
    }
};

int main()
{
    Dog Spot;
    Dog Rex;

    system("pause");
}
