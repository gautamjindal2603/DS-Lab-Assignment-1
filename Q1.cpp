#include <iostream>
using namespace std;
void createArray(int arr[], int &n)
{
    cout << "Enter size of array (max=100)";
    cin >> n;
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
void insertElement(int arr[], int &n, int pos, int val)
{
    if (n >= 100)
    {
        cout << "Array is full, cannot insert.\n";
        return;
    }
    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = val;
    n++;
    cout << "Element inserted.\n";
}

void deleteElement(int arr[], int &n, int pos)
{
    if (n == 0)
    {
        cout << "Array is empty, cannot delete.\n";
        return;
    }
    if (pos < 1 || pos > n)
    {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    cout << "Element deleted.\n";
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}
int main()
{
    int n, pos, val, key, index;
    int arr[100];
    int operation;
    while (1)
    {
        cout << "--Menu--" << endl
             << "1.Create" << endl
             << "2.Display" << endl
             << "3.Insert" << endl
             << "4.Delete" << endl
             << "5.Linear Search" << endl
             << "6.Exit" << endl;

        cout << endl
             << "Select operation number" << endl;
        cin >> operation;

        switch (operation)
        {
        case 1:
            createArray(arr, n);
            break;
        case 2:
            displayArray(arr, n);
            break;
        case 3:
            cout << "Enter position (1-" << n + 1 << "): ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            insertElement(arr, n, pos, val);
            break;

        case 4:
            cout << "Enter position (1-" << n << "): ";
            cin >> pos;
            deleteElement(arr, n, pos);
            break;

        case 5:
            cout << "Enter value to search: ";
            cin >> key;
            index = linearSearch(arr, n, key);
            if (index != -1)
                cout << "Element found at position " << index + 1 << endl;
            else
                cout << "Element not found.\n";
            break;

        case 6:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
