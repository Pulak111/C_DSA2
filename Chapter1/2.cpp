// Strings
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int l1 = s.length();
    cout << "Length of string (s) : " << l1 << endl;
    int l2 = s.size();
    cout << "Length of string (s) by size : " << l2 << endl;
    cout << "Letter at 5th index : " << s[5];
    s[l1 - 1] = 'G';
    cout << "New string : " << s << endl; 
}