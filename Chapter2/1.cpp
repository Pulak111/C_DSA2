// Selection Sort
// Time Complexcity
/*
    Best ~= n^2
    Good ~= n^2
    Worst ~= n^2
*/
#include<iostream>
using namespace std;
void inp_arr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cin >> arr[i];
}
void pri_arr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void selection_sort(int arr[], int);
int main()
{
    int num, arr1[100];
    cout << "Enter the number of elements in an array: ";
    cin >> num;
    inp_arr(arr1, num);
    selection_sort(arr1, num);
    pri_arr(arr1, num);
    return 0;
}
void selection_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
        {
            int min = i;
            for(int j = i; j < n; j++)
            {
                if(arr[min] > arr[j])
                    min = j;
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
}
