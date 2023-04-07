// Print my name n time
#include<iostream>
#include<strings.h>
using namespace std;
void name(int, string);
int main()
{
    int num;
   // cout << "Enter the number of times you want to print your name: ";
    //cin >> num;
    string s;
    cout << "Enter the name: " << endl;
    getline(cin, s);
    name(num, s);
}
void name(int b, string name1)
{
    static int a = 1; 
    if(a <= b)
    {
        cout <<"The name is:" << name1 << endl;
        a++;
        name(b, name1);
    }

}
