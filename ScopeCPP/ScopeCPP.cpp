#include <iostream>
using namespace std;

int a = 10;

int main()
{
    {
        int a(10);
    }

    cout << a << endl;
}
