// Hashing integer using map
// Time Complexity Both fetching & storing
/*
Best --> logN
Avg -->  logN
Worst -->logN
*/
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
void inp_arr(int arr[], int);
int main()
{
    int num_ele, arr1[(int)1e6];
    cout << "Enter the number of element in the array: ";
    cin >> num_ele;
    inp_arr(arr1, num_ele);

// pre - compute
    map<int, int> map_has;
    for(int i = 0; i < num_ele; i++)
        map_has[arr1[i]]++;

// Iterate in the map
    for(auto it : map_has)
        cout << it.first << " -> " << it.second << endl;

    int num_ser;
    cout << "Enter the total numbers you want to search : ";
    cin >> num_ser;
    while(num_ser--)
    {
        int num;
        cout << "Enter the number you want to search: ";
        cin >> num;
        // Fetch
        cout << "Number of times " << num << " appears : " << map_has[num] << endl;
    }

}
void inp_arr(int arr1[], int a)
{
    for(int i = 0; i < a; i++)
        cin >> arr1[i];
}