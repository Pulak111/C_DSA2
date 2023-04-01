// Strings
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s); // To take line in input
    //cin >> s;
    int l1 = s.length();
    cout << "Length of string (" << s << ") using length : " << l1 << endl;
    int l2 = s.size();
    cout << "Length of string (" << s << ") using size : " << l2 << endl;
    cout << "Letter at last index : " << s[l1 - 1];
    s[l1 - 1] = 'G';
    cout << "New string : " << s << endl; 
}
