// Call by Value
#include<iostream>
using namespace std;
void modify(int);
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    modify(num);
    cout << endl << "Num in main function: " << num << endl;
}
void modify(int num)
{
    num += 10;
    cout << "Num inside modify function : " << num << endl;
    num += 20;
    cout << "Num inside modify function : " << num << endl;
    
}