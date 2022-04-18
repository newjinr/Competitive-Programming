#include <iostream>
using namespace std;
#define ll long long

// quickSort -----------------------

int partition(ll *arr, int low, int high)
{
    int i = low, temp;
    for (int j = low; j < high; ++j)
    {
        if (arr[j] <= arr[high])
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }
    }

    temp = arr[high];
    arr[high] = arr[i];
    arr[i] = temp;

    return i;
}

void quickSort(ll *arr, int low, int high)
{
    if (low > high)
        return;
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
}

string findPythangoreanTriplets(ll *arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        int k = i - 1;

        while (j < k)
        {
            if (arr[i] == arr[j] + arr[k])
                return "Yes";
            else if (arr[i] > arr[j] + arr[k])
                j++;
            else
                k--;
        }
    }
    return "No";
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll A[n];

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            A[i] = x * x;
        }

        quickSort(A, 0, n - 1);
        cout << findPythangoreanTriplets(A, n);
    }

    return 0;
}