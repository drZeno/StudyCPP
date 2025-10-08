#include <iostream>
#include <string>
using namespace std;

void ChangeStr(string& str)
{
    str += "!";
}
int testnumber = 0;
int testnumbertwo = 0;
int main()
{
    string myStr = "Amadeus";
    ChangeStr(myStr);
    cout << myStr << endl;
    int testnumbertwo = testnumbertwo + testnumber&;
        cout << testnumber << endl;
    system("pause");
}

