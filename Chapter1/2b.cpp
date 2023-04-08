// Convert Upper Case into lower case
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the upper case alphabet: ";
    cin >> ch;
    ch = ch - 'A' + 'a';
    cout << ch;
    
}