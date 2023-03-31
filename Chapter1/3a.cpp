// Call By Value
#include<iostream>
using namespace std;
void modify(int);
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num; // eg. 13
    modify(num);
    cout << endl << "Num in main function: " << num << endl; // 13
}
void modify(int num)
{
    num += 10;
    cout << "Num inside modify function : " << num << endl; // 23
    num += 20;
    cout << "Num inside modify function : " << num << endl; // 43

}
