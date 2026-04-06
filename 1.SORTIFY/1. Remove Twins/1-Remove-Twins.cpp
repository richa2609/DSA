#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> a[i];
    }

    int b[100];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int found = 0;

        for (int j = 0; j < k; j++)
        {
            if (a[i] == b[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            b[k] = a[i];
            k++;
        }
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nAfter removing duplicates: ";
    for (int i = 0; i < k; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}