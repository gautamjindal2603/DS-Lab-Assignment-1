#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int column = 4;
    int arr[3][4];
    cout << "Enter elements of " << row << "x" << column << " array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < column; j++)
        {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
    for (int j = 0; j < column; j++)
    {
        int colSum = 0;
        for (int i = 0; i < row; i++)
        {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
    return 0;
}