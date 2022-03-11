#include <bits/stdc++.h>
using namespace std;

void print(int k, int s[], int l, int ind, int n, int *a)
{
    if (k == l)
    {
        for (int i = 0; i < l; i++)
            cout << s[i] << " ";
        cout << "\n";
        return;
    }
    for (int i = ind; i < n; i++)
    {
        s[l] = a[i];
        print(k, s, l + 1, i + 1, n, a);
    }
}

int main()
{
    // write your code here
    int n, k;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; ++i)
        cin >> A[i];
    cin >> k;

    int s[k];

    print(k, s, 0, 0, n, A);
    return 0;
}