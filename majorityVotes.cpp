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
        map<int, int> m;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        map<int, int>::iterator itr;
        int largestVotes = -1, candiate;
        for (itr = m.begin(); itr != m.end(); ++itr)
            if (largestVotes < itr->second)
            {
                largestVotes = itr->second;
                candiate = itr->first;
            }

        if (largestVotes > n / 2)
            cout << candiate << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}