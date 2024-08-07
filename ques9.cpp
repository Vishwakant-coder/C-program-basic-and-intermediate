// Write a program for multiplication of two matrices using C++
#include <iostream>

using namespace std;

const int r = 10;
const int c = 10;

void input(int arr[][c], int arr1[][c], int row, int col, int row1, int col1)
{
    cout << "Enter first array..." << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element of " << i << " " << j << " position array : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Enter second array..." << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << "Enter element of " << i << " " << j << " position array : ";
            cin >> arr1[i][j];
        }
        cout << endl;
    }
}

void display(int arr2[][c], int row, int col1)
{
    cout << "Multiple of two array is..." << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}

void multi(int arr[][c], int arr1[][c], int arr2[][c], int row, int col, int row1)
{
    int i, j, sum;
    if (col == row1)
    {
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                arr2[i][j] = 0;
                for (sum = 0; sum < row1; sum++)
                {
                    arr2[i][j] = arr2[i][j] + arr[i][sum] * arr1[sum][j];
                }
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Invalid order of matrix..." << endl;
        cout << "For multiplication of matrix..." << endl;
    }
}

int main()
{
    int arr[r][c], arr1[r][c], arr2[r][c], row, col, row1, col1;

    cout << "Enter the size of Row and Column for First array : ";
    cin >> row>> col;

    cout << "Enter the size of Row and Column Second array : ";
    cin >> row1>>col1;

    input(arr, arr1, row, col, row1, col1);
    multi(arr, arr1, arr2, row, col, row1);
    display(arr2, row, col1);


    return 0;
}
