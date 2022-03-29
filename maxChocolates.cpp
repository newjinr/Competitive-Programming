#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int left, int right)
{
    int mid = (left + right) / 2;
    int n1 = mid - left + 1, n2 = right - mid;
    int leftArr[n1], rightArr[n2];

    for (int i = 0; i < n1; ++i)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; ++i)
        rightArr[i] = arr[mid + i + 1];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (leftArr[i] > rightArr[j])
            arr[k++] = leftArr[i++];
        else
            arr[k++] = rightArr[j++];
    }

    while (i < n1)
        arr[k++] = leftArr[i++];
    while (j < n2)
        arr[k++] = rightArr[j++];
}

void mergeSort(int *arr, int left, int right)
{
    int mid = (left + right) / 2;
    if (left >= right)
        return;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, right);
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

        mergeSort(A, 0, n - 1);

        int ans = 0;
        for (int i = 0; i < n; ++i)
            if (!(i & 1))
                ans += A[i];

        cout << ans << endl;
    }

    return 0;
}