#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int even[100], odd[100];
    int ec = 0, oc = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[ec] = a[i];
            ec++;
        }
        else
        {
            odd[oc] = a[i];
            oc++;
        }
    }

    for (int i = 0; i < ec; i++)
    {
        for (int j = 0; j < ec - 1; j++)
        {
            if (even[j] > even[j + 1])
            {
                int t = even[j];
                even[j] = even[j + 1];
                even[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < oc; i++)
    {
        for (int j = 0; j < oc - 1; j++)
        {
            if (odd[j] < odd[j + 1])
            {
                int t = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = t;
            }
        }
    }

    int m[100];
    int k = 0;

    for (int i = 0; i < ec; i++)
    {
        m[k] = even[i];
        k++;
    }

    for (int i = 0; i < oc; i++)
    {
        m[k] = odd[i];
        k++;
    }

    cout << "\nArray: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nEven: ";
    for (int i = 0; i < ec; i++)
        cout << even[i] << " ";

    cout << "\nOdd: ";
    for (int i = 0; i < oc; i++)
        cout << odd[i] << " ";

    cout << "\nFinal: ";
    for (int i = 0; i < k; i++)
        cout << m[i] << " ";

    return 0;
}