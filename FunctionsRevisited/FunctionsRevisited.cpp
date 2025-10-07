#include <iostream>
using namespace std;

void welcome();

char getYesNo();

int main()
{
    welcome();    
    
}

void welcome()
{
    cout<<"Welcome \n";
}
char getYesNo()
{
    cout<<"Enter your choice : Y or N :    ";
    char choice;
    cin>>choice;
    return choice;
}