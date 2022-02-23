#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n;
    cin >> n;
    map<int, vector<int>> A;
    set<int> S;
    vector<pair<int, int>> ans;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        S.insert(x);
        if (A.count(x) == 0)
        {
            vector<int> a;
            a.push_back(i);
            A.insert({x, a});
        }
        else
            A[x].push_back(i);
    }

    set<int>::iterator itr;
    for (itr = S.begin(); itr != S.end(); itr++)
    {
        if (A[*itr].size() == 1)
            ans.push_back({*itr, 0});
        else
        {
            int diff = A[*itr][1] - A[*itr][0];
            bool valid = true;
            for (int i = 1; i < A[*itr].size(); i++)
            {
                if (A[*itr][i] - A[*itr][i - 1] != diff)
                {
                    valid = false;
                    break;
                }
            }
            if (valid)
                ans.push_back({*itr, diff});
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << endl;

    return 0;
}
