#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[100];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int plus = 0, minus = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            plus++;
        }
        else if(a[i] < 0)
        {
            minus++;
        }
    }

    cout << "\nArray: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nPositive count: " << plus;
    cout << "\nNegative count: " << minus;

    return 0;
}