#include <iostream>
using namespace std;

int main()
{
    int n, key, comp = 0;
    cout << "Enter the size: ";

    cin >> n;
    int a[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the key: ";
    cin >> key;

    int pos = -1;

    for (int i = 0; i < n; i++)
    {
        comp++;
        if (a[i] == key)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "Found at " << pos + 1 << endl;
    else
        cout << "Not found\n";

    cout << "Comparisons: " << comp;

    return 0;
}