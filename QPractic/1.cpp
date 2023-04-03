// Identity matrix;
#include<iostream>
using namespace std;
void inp_arr(int arr[100][100], int);
void idn_arr(int arr[100][100], int);
int main()
{
    int num;
    int test_arr[100][100];
    cout << "Enter the number of rows  & columns : ";
    cin >> num;
    inp_arr(test_arr, num);
    idn_arr(test_arr, num);
    return 0;
}
void inp_arr(int arr[100][100], int a)
{
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void idn_arr(int arr[100][100], int a)
{
    int counter = 0;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(i == j || i + j == a - 1)
            {
                if(arr[i][j] == 1)
                    counter++;
            }
        }
    }
    if(counter == 2 * a - 1)
        cout << "Identity Matrix";
    else
        cout << "Not identity"; 
}
