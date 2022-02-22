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

// int n, x;
// cin >> n;
// Set s;
// Set ans;
// for (int i = 0; i < n; i++)
// {
//     cin >> x;
//     s.insert({x, i});
// }

// Set::iterator p1, p2, temp1;

// p1 = s.begin();
// p2 = ++s.begin();
// int count = 0, flag = 0, diff;
// bool valid = true;
// while (p1 != s.end())
// {
//     if ((*p1).first == (*p2).first)
//     {
//         temp1 = p2;
//         temp1--;
//         if (flag < 1)
//         {
//             diff = (*p2).second - (*temp1).second;
//             flag++;
//         }

//         if ((*p2).second - (*temp1).second != diff)
//             valid = false;
//         count++;
//         p2++;
//     }
//     else
//     {
//         int value = (*p1).first;
//         int progression = 0;
//         if (count > 0)
//         {
//             temp1 = p1;
//             progression = (*++p1).second - (*temp1).second;
//         }
//         p1 = p2;
//         temp1 = p2;
//         p2++;
//         if (count <= 2 || valid)
//             ans.insert({value, progression});
//         count = 0;
//         valid = true;
//         flag = 0;
//     }
// }

// cout << ans.size() << endl;
// for (p1 = ans.begin(); p1 != ans.end(); p1++)
//     cout << (*p1).first << " " << (*p1).second << endl;
