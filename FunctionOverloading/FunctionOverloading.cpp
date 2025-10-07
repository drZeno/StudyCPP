#include <iostream>
#include <string>
using namespace std;

 void Print(string str)
 {
cout << str << "\n";
 }
 void Print(int i )
 {
  cout << i << "\n";
 }

 void Print(string str1, string str2)
 {
  cout << str1 << " " << str2 << "\n";
 }

 void Print(int i, string something)
 {
  cout << i << " " << something << "\n";
 }

int main()
{
  Print(3);
  Print("STRING");
  Print("INT", "FLOAT");
  Print(3,"SOMETHING");
  
}