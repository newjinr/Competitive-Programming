#include <iostream>
#include <set>
using namespace std;

// quickSort -----------------------

int partition(int *arr, int low, int high)
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

void quickSort(int *arr, int low, int high)
{
    if (low > high)
        return;
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
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
        int A[n];

        for (int i = 0; i < n; ++i)
            cin >> A[i];

        quickSort(A, 0, n - 1);
        int x = -1, y, z;

        for (int i = n - 1; i >= 0; i--)
        {
            int j = 0;
            int k = i - 1;

            while (j < k)
            {
                if (A[i] == A[j] + A[k])
                {
                    if (x == A[j] + A[k] && z < A[k])
                    {
                        y = A[k];
                        z = A[k];
                    }
                    else if (x < A[j] + A[k])
                    {
                        x = A[j] + A[k];
                        y = A[j];
                        z = A[k];
                    }
                    break;
                }
                else if (A[i] > A[j] + A[k])
                    j++;
                else
                    k--;
            }
        }

        if (x == -1)
            cout << -1 << endl;
        else
            cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
