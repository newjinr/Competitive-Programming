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
        for (int i = 0; i < n; i++)
            cin >> A[i];
        bool touched = false;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && A[i] > A[i + 1])
            {
                touched = true;
                cout << i << " ";
            }
            else if (i == n - 1 && A[i] > A[i - 1])
            {
                touched = true;
                cout << i << " ";
            }
            else if (i != 0 && i != n - 1 && A[i] > A[i + 1] && A[i] > A[i - 1])
            {
                touched = true;
                cout << i << " ";
            }
        }
        if (!touched)
            cout << -1;
        cout << endl;
    }
    return 0;
}