#include <iostream>
using namespace std;


void welcome()
{
    cout << "Welcome to the StudyCPP FunctionsMore \n";
}

void printNumber(int numberToPrint)
{
    cout << numberToPrint << endl;
}

int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

int main()
{
    welcome();
    printNumber(1);

    int c;
    c = add(1, 2);
    printNumber(c);

    
    system("pause"); 
}