// Basic Hashing
#include<iostream>
#include<math.h>
//#include<unordered_map>
using namespace std;
void inp_arr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cin >> arr[i];
}
int arr1[(int)1e7]; // Globally we can declare 'int' upto 10^7 'boolean' 10^8
int main()
{
    int num_ele; // Inside main we can declare 'int' value upto 10^6 ' boolean ' 10^7
    cout << "Enter the number of element in an array: ";
    cin >> num_ele;
    inp_arr(arr1, num_ele);

    // precompute
    int hash[1000000];
    for(int i = 0; i < num_ele; i++)
        hash[arr1[i]] += 1;
    
    int q;
    cout << "Enter the total number you want to search: ";
    cin >> q;
    while(q--)
    {
        int num_ser;
        cout << "Enter the number you want to search: ";
        cin >> num_ser;
        cout << num_ser << " appears : " << hash[num_ser] << endl;
    }
}
