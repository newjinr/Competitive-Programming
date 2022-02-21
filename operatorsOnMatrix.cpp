#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n, m;
    cin >> n >> m;
    int A[n][m];
    int B[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> B[i][j];

    // Addition
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << A[i][j] + B[i][j] << " ";
        cout << endl;
    }

    // multiplication
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int total = 0;
            for (int k = 0; k < n; k++)
                total += A[i][k] * B[k][j];
            cout << total << " ";
        }
        cout << endl;
    }

    return 0;
}