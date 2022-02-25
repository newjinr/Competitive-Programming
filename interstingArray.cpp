#include <bits/stdc++.h>
using namespace std;

void findIndex(int *A, int n, int k)
{
    map<int, int> index;
    int l = -1;
    int j = -1;

    for (int i = 0; i < n; i++)
    {
        if (index.count(k - A[i]) != 0)
        {
            if (i > j)
            {
                j = i;
                l = index[k - A[i]];
            }
            index.insert({A[i], i});
        }
        else
            index.insert({A[i], i});
    }
    if (j == -1)
        cout << "no answer" << endl;
    else
        cout << l << " " << j << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int *A = new int[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        cin >> k;
        findIndex(A, n, k);
    }

    return 0;
}