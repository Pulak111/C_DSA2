// Pass By refrence
#include<iostream>
#include<string.h>
using namespace std;
void mod_str(string &); // If we want to pass by refrence then we need to declare '&' here.
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s; // Hello;
    mod_str(s);
    cout << "String inside main function: " << s << endl; // HellA
    return 0;
}
void mod_str(string &a)
{
    int l = a.length();
    a[l - 1] = 'A';
    cout << "String insdid mod_str function : " << a << endl; // HellA
}
