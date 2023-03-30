// 2D Array
#include<iostream>
using namespace std;
void inp_arr(int arr[1000][1000], int, int);
void pri_arr(int arr[1000][1000], int, int);
int main()
{
    int arr2[1000][1000]; // if we want to call the array in function then size should be same.
    int row, column;
    cout << "Enter the number of rows & columns: ";
    cin >> row >> column;
    inp_arr(arr2, row, column);
    cout << "The given 2D array is: " << endl;
    pri_arr(arr2, row, column);
    return 0;   
}
void inp_arr(int arr[1000][1000], int a, int b)
{
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void pri_arr(int arr[1000][1000], int a, int b)
{
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
