#include <iostream>
using namespace std;

int partition(int *arr, int low, int high)
{
    int i = low, temp;
    for (int j = low; j < high; ++j)
    {
        if (arr[j] <= arr[high])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    temp = arr[i];
    arr[i] = arr[high];
    arr[high] = temp;
    return i;
}

void quickSort(int *arr, int low, int high)
{
    if (low >= high)
        return;
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
}

int main()
{
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; ++i)
        cin >> A[i];

    quickSort(A, 0, n - 1);

    for (auto a : A)
        cout << a << " ";
    cout << endl;
}