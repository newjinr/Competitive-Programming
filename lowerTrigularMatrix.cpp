#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n, m;
    cin >> n >> m;
    int A[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (i >= j)
                cout << A[i][j] << " ";
            else
                cout << 0 << " ";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (i <= j)
                cout << A[i][j] << " ";
            else
                cout << 0 << " ";
        cout << endl;
    }

    return 0;
}