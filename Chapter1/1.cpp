// 2D Array
#include<iostream>
using namespace std;
int main()
{
    int arr2[100][100];
    int row, column;
    cout << "Enter the number of rows & columns: ";
    cin >> row >> column;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << "The given 2D array is: " << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}