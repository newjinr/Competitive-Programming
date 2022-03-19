#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    // write your code here
    int n, k;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; ++i)
        cin >> A[i];
    cin >> k;
    int Q[k];
    sort(A, A + n);

    for (int i = 0; i < k; ++i)
        cin >> Q[i];

    for (int i = 0; i < k; ++i)
    {
        ull sum = 0;
        for (int j = 0; j < n; ++j)
        {
            sum += A[j];
            if (sum > Q[i])
            {
                cout << j << endl;
                break;
            }
            else if (sum >= Q[i])
            {
                cout << j + 1 << endl;
                break;
            }
            if (j == n - 1)
                cout << n << endl;
        }
    }
    return 0;
}