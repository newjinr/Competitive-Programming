#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int sumOfSubsets(int *arr, int i, int n, int sum = 0)
{
    if (i == n)
    {
        ans += sum;
        return 0;
    }
    sumOfSubsets(arr, i + 1, n, sum + arr[i]);
    sumOfSubsets(arr, i + 1, n, sum);
    return ans;
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

        ::ans = 0;
        cout << sumOfSubsets(A, 0, n) << endl;
    }
    return 0;
}