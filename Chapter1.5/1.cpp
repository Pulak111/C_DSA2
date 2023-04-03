// Print 1 to N using recursion
#include<iostream>
using namespace std;
void Nat_num(int);
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    Nat_num(num);
}
void Nat_num(int a)
{
    static int count = 1;
    if(count > a)
    {
        return;
    }
    else{
        cout << count << " ";
        count++;
        Nat_num(a);
    }
}