#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[100];

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b[100];

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (b[j] > b[j + 1])
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    int c[100];

    for (int i = 0; i < n; i++)
    {
        c[i] = b[n - 1 - i];
    }

    cout << "\nOriginal: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    // Ascending
    cout << "\nAscending: ";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    // Descending
    cout << "\nDescending: ";
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}