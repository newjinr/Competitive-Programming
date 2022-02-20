#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            A[(i + k) % n] = x;
        }
        for (auto a : A)
            cout << a << " ";
        cout << endl;
    }
    return 0;
}