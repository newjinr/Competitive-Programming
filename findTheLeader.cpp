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
        int A[n];
        int currentHigestValue = -1;

        for (int i = 0; i < n; i++)
            cin >> A[i];

        for (int i = n - 1; i >= 0; i--)
            if (A[i] >= currentHigestValue)
            {
                cout << A[i] << " ";
                currentHigestValue = A[i];
            }
        cout << endl;
    }

    return 0;
}