// Swap Array with help of recurssion
#include<iostream>
using namespace std;
void swap_f(int a, int arr[100],int n);
int main()
{
    int element;
    int arr1[100];
    cout << "Enter the number of elements of in array: ";
    cin >> element;
    int a = 0;
    for(int i = 0; i < element; i++)
    {
        cin >> arr1[i];
    }
    swap_f(a, arr1,element);
    cout << "Array after reverse : " << endl;
    for(int i = 0; i < element; i++)
        cout << arr1[i] << " ";
}
void swap_f(int i, int arr[100], int n)
{
    if(i >= n / 2)
        return;
    swap(arr[i], arr[n - 1]);
    swap_f(i+1, arr, n - 1);
}