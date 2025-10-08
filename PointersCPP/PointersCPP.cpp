#include <iostream>
#include <string>
using namespace std;

int a = 100;
int b = 50;

struct Container
{
    string name;
    int x;
    int y;
    int z;
};

int justnumber = 0;

int main ()
{
    Container container = {"Amadeus",1,2,3};
    Container* PtrToCont = &container;
    //СКОБКИ НУЖНЫ ЧТОБЫ СКАЗАТЬ КОМПИЛЯТОРУ ЧТО ДЕЛАТЬ ПЕРВЫМ.
    //БЕЗ СКОБОК ОН БУДЕТ СМОТРЕТЬ СПРАВА НА ЛЕВО, А БЕЗ НИХ ОН НЕ ОПРЕДЕЛЕН.
    cout << (*PtrToCont).x << endl;
    
    //БОЛЕЕ УДОБНЫЙ СПОСОБ
    cout << PtrToCont->x << endl;

    justnumber += PtrToCont->z;
    cout << "Just number: " << justnumber << endl;
    
    int* justNumberPointer = &a;
    cout << *justNumberPointer << endl;
    
     *justNumberPointer += 2;
    cout << *justNumberPointer << endl;
    cout << a << endl;
    int numbers[] = { 1, 2, 3, 4, 5 };
    int* NumPtr = numbers;
    cout << *NumPtr << endl;
    NumPtr++;
    cout << *NumPtr << endl;
    
}
