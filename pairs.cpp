#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> pairs;

bool findNum(int x, int y)
{
    for (auto pair : pairs)
        if (pair.first != x && pair.first != y && pair.second != x && pair.second != y)
            return false;

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        pairs.emplace_back(a, b);
    }

    for (int x : {pairs[0].first, pairs[0].second})
    {
        if (findNum(x, -1))
        {
            cout << "YES" << endl;
            return 0;
        }

        for (int i = 1; i < m; ++i)
        {
            if (x != pairs[i].first && x != pairs[i].second)
            {
                if (findNum(x, pairs[i].first) || findNum(x, pairs[i].second))
                {
                    cout << "YES" << endl;
                    return 0;
                }
                break;
            }
        }
    }

    cout << "NO" << endl;
}