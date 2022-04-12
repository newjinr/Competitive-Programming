#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *A = new int[n];
        int *B = new int[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
            B[i] = A[i];
        }

        sort(A, A + n);
        int low = 0;
        int high = 0;

        for (int i = 0; i < n; ++i)
        {
            if (A[i] != B[i])
            {
                low = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; --i)
        {
            if (A[i] != B[i])
            {
                high = i;
                break;
            }
        }

        cout << low << " " << high << endl;
    }

    return 0;
}