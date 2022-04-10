#include <bits/stdc++.h>
using namespace std;

void findOddorEven(int *x, int *y, int i, int n)
{
    if (i == n - 1)
    {
        x[i]++;
        y[i] = 0;
    }
    else
    {
        x[i] = x[i + 1] + 1;
        y[i] = y[i + 1];
    }
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
        int odd[n]{0}, even[n]{0};
        int ans = 0;

        for (int i = 0; i < n; ++i)
            cin >> A[i];

        for (int i = n - 1; i >= 0; --i)
            if (A[i] & 1)
                findOddorEven(odd, even, i, n);
            else
                findOddorEven(even, odd, i, n);

        for (int i = 0; i < n - 1; ++i)
            if (A[i] & 1)
                ans += even[i + 1];
            else
                ans += odd[i + 1];

        cout << ans << endl;
    }

    return 0;
}