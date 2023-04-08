// Character hashing
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s); 

    //int hash[256] = {0}; // If we don't initilize to zero then get garbage value
    int hash[25] = {0}; // If only lower case /  upper case hash[25]
    for(int i = 0; i < s.size(); i++)
        //hash[s[i]]++; 
         hash [s[i] - 'a']++;

    int num;
    char ch;
    cout << "Enter the number of character you want to search: ";
    cin >> num;
    while(num--)
    {
        cout << "Enter the character you want to search: ";
        cin >> ch;
        cout << ch << " appears : " << hash[ch - 'a'] << endl; // hash[ch]
    }

}