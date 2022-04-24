#include <bits/stdc++.h>
using namespace std;
#define ll long long

void merge(ll *arr, int left, int right, int &ans, int m)
{
    int mid = (left + right) / 2;
    int n1 = mid - left + 1, n2 = right - mid;
    ll leftArr[n1], rightArr[n2];

    for (int i = 0; i < n1; ++i)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; ++i)
        rightArr[i] = arr[mid + i + 1];

    int i = 0, j = 0, k = left;

    while (i < n1)
    {
        if (leftArr[i] > rightArr[j] * m)
        {
            int temp = j + 1;
            while (leftArr[i] > rightArr[temp] * m && j < n2 - 1)
            {
                temp++;
                j++;
            }
            ans += j + 1;
            i++;
        }
        else
            i++;
    }

    i = 0, j = 0;

    while (i < n1 && j < n2)
    {

        if (leftArr[i] < rightArr[j])
            arr[k++] = leftArr[i++];
        else
            arr[k++] = rightArr[j++];
    }

    while (i < n1)
        arr[k++] = leftArr[i++];
    while (j < n2)
        arr[k++] = rightArr[j++];
}

void mergeSort(ll *arr, int left, int right, int &ans, int k)
{
    int mid = (left + right) / 2;
    if (left >= right)
        return;
    mergeSort(arr, left, mid, ans, k);
    mergeSort(arr, mid + 1, right, ans, k);
    merge(arr, left, right, ans, k);
}

int main()
{
    // write your code here
    int n, k;
    cin >> n >> k;
    ll A[n];
    int ans = 0;

    for (int i = 0; i < n; ++i)
        cin >> A[i];

    mergeSort(A, 0, n - 1, ans, k);
    cout << ans << endl;

    return 0;
}