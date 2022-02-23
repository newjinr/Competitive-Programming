#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *A = new int[n];
        vector<int> ans;

        for (int i = 0; i < n; i++)
            cin >> A[i];

        int p1 = 0;
        int p2 = n - 1;

        while (p1 <= p2)
        {
            if (p1 == p2)
                ans.push_back(A[p1]);
            else
            {
                ans.push_back(A[p2]);
                ans.push_back(A[p1]);
            }
            p1++, p2--;
        }

        for (auto a : ans)
            cout << a << " ";
        cout << endl;
    }

    return 0;
}