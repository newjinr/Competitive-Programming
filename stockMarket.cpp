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
        vector<int> index;
        bool invested = false;
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
            if (i != 0)
            {
                if (A[i] > A[i - 1] && !invested)
                {
                    index.push_back(i - 1);
                    invested = true;
                }
                else if (A[i] < A[i - 1] && invested)
                {
                    index.push_back(i - 1);
                    invested = false;
                }
                if (i == n - 1 && invested)
                    index.push_back(i);
            }
        }

        long long profit = 0;
        for (int i = 0; i < index.size(); i += 2)
            profit += A[index[i + 1]] - A[index[i]];

        cout << profit << endl;
    }

    return 0;
}