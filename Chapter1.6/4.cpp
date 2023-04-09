// String hashing using map
#include<iostream>
#include<string.h>
#include<map>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    map<char, int> map_has;
// Pre - compute
    for(int i = 0; i < s.length(); i++)
        map_has[s[i]]++; // Here s[i] is 'character' while using array hash it is 'int'
// Iterate 
    for(auto it : map_has)
        cout << it.first << " -> " << it.second << endl;
}