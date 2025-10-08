#include <iostream>
#include <string>
using namespace std;

void ChangeStr(string& str)
{
    str += "!";
}

int main()
{
    string myStr = "Amadeus";
    ChangeStr(myStr);
    cout << myStr << endl;
    
    system("pause");
}

