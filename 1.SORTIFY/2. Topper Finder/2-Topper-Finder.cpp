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

    if (n < 2)
    {
        cout << "At least 2 elements needed here!";
        return 0;
    }

    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    int second = 0;
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != max)
        {
            if (found == 0 || a[i] > second)
            {
                second = a[i];
                found = 1;
            }
        }
    }

    cout << "\nArray: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nLargest: " << max;

    if (found == 1)
        cout << "\nSecond largest: " << second;
    else
        cout << "\nAll elements are same";

    return 0;
}