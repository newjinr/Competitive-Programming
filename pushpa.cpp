#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        unsigned int A[n];

        for (int i = 0; i < n; ++i)
            cin >> A[i];

        sort(A, A + n);
        unsigned max = A[n - 1], j = 0;

        for (int i = 0; i < n; ++i)
        {
            if (A[i] + j > max)
                max = A[i] + j;
            j++;
            if (i < n - 1 && A[i] + j != A[i + 1] + j)
                j = 0;
        }

        cout << max << endl;
    }

    return 0;
}
