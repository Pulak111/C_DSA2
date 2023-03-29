// Pass by value
#include<iostream>
using namespace std;
void modify(string s);
int main()
{
    string s;
    cout << "Enter the string :";
    cin >> s ;
    modify(s);
    cout << "String inside main function : " << s << endl; 
}
void modify(string s)
{
    int l = s.length();
    s[l - 1] = 'A';
    cout << "String inside main function : " << s << endl;
}

