// String hashing using unordered_map
// Time Complexcity
/*
Best --> O(1)
Avg --> O(1)
Worst --> O(N) // Number of elements in a map
*/
#include<iostream>
#include<string.h>
#include<map>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    unordered_map<char, int> map_has; 
// Pre - compute
    for(int i = 0; i < s.length(); i++)
        map_has[s[i]]++; // Here s[i] is 'character' while using array hash it is 'int'
// Iterate 
    for(auto it : map_has)
        cout << it.first << " -> " << it.second << endl;
}