#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        ull n, x;
        cin >> n;
        ull total = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            total += x;
        }
        cout << (((n * (n + 1)) / 2) - total) << endl;
    }
    return 0;
}