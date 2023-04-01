// All Divisors of a given number & Total Number of Divisors
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void print(vector<int>);
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    vector<int> div;
    // Time Complexicity O(sqrt n)
    for(int i = 0; i <= sqrt(num); i++) // i*i <= num (Instead of square root)
    {
        if(num % i == 0)
        {
            div.push_back(i);
            int num2 = num / i;
            if(num2 != i) 
                div.push_back(num2);
        }
    }
    // Time Complexicity O(n log n) : n is number of factors
    sort(div.begin(), div.end());
    print(div);
    cout << "\nTotal number of divisors : " << div.size();
}
// Time Complexicity O(Total Number of divisors)
void print(vector<int> div)
{
    for(int i = 0; i < static_cast<int>(div.size()); i++)
    {
        cout << div[i] << " ";
    } 
}
