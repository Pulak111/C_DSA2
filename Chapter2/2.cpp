// Bubble Sort --> Push the maximum to the last by using adjacent swap
// Time Complexity
/*
Best --> O(N)
Avg --> O(N^2)
Worst --> O(N^2)
*/

#include<iostream>
using namespace std;
void inp_oup(int arr[], int n)
{
    int key;
    cout << "Press '1' for giving input or Press '2' for output: ";
    cin >> key;
    switch(key)
    {
        case 1:
            for(int i = 0; i < n; i++)
                cin >> arr[i];
            break;
        case 2:
            for(int i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;
    }
}
void bubble_sort(int arr1[], int);
int main()
{
    int num;
    int arr[100];
    cout << "Enter the number of elements in the array : ";
    cin >> num;
    inp_oup(arr, num);
    bubble_sort(arr, num);
    inp_oup(arr, num);
    return 0;
}
void bubble_sort(int arr1[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for(int j = 0; j <= i - 1; j++)
        {
            if(arr1[j] > arr1[j + 1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
                didSwap++;
            }
        }
        if(didSwap == 0)  // Best Case [2, 3, 4, 5]
            break;
    }
}
