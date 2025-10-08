#include <iostream>
#include <string>
using namespace std;

int justNumber = 13;

int main ()
{
    int* justNumberPointer = &justNumber;
    cout << *justNumberPointer << endl;
    
     *justNumberPointer += 2;
    cout << *justNumberPointer << endl;
}
