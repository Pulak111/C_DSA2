// Total number of digit in given Number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long num; // Approximate range(10^19)
    cout << "Enter the number : ";
    cin >> num;
    int digit;
    digit = log10(num) + 1;
    cout << "Number of digit in " << num << " : " << digit << endl;
}