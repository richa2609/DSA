#include <iostream>
using namespace std;

void quickSort(int a[], int low, int high)
{
    if (low >= high)
        return;

    int pivot = a[high];
    int i = low;

    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            swap(a[i], a[j]);
            i++;
        }
    }

    swap(a[i], a[high]);
    quickSort(a, low, i - 1);
    quickSort(a, i + 1, high);
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int a[100];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "here is the Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}