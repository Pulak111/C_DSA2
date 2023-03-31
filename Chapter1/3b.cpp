// Call By value
#include<iostream>
using namespace std;
void modify(string s);
int main()
{
    string s;
    cout << "Enter the string :";
    getline(cin,s); // Hello
    modify(s);
    cout << "String inside main function : " << s << endl; // Hello
}
void modify(string s)
{
    int l = s.length();
    s[l - 1] = 'A';
    cout << "String inside modify function : " << s << endl; // HellA
}

