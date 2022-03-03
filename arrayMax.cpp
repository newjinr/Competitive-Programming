#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll *arr = new ll[k]{0};
        ll A[n], ans = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
            if (i < k)
                arr[i] = A[i];
        }

        for (int i = 0; i < n - k; ++i)
        {
            ll num = arr[i % k];
            ll sum = A[i + k] + num;
            arr[i % k] = sum;
        }

        sort(arr, arr + k);

        if (arr[k - 1] > ans)
            ans = arr[k - 1];

        for (int i = n - k; i < n; ++i)
            if (A[i] > ans)
                ans = A[i];
        cout << ans << endl;
    }

    return 0;
}