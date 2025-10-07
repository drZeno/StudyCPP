#include <iostream>
using namespace std;

// Определяем функцию **вне main**
int Plusfunction(int number_one, int number_two)
{
    int local_Variable = number_one + number_two;
    cout << "Sum is : " << local_Variable << endl;
    return local_Variable;
}

int main()
{
    int sumhowmuch = Plusfunction(1, 2);
    return 0;
}