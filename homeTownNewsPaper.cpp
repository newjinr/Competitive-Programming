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

        set<pair<int, string>> homeTown;
        set<pair<int, string>> notHomeTown;

        for (int i = 0; i < n; ++i)
        {
            string content;
            int popularity, origin;
            cin >> content >> popularity >> origin;
            if (origin == 0)
                notHomeTown.insert({popularity, content});
            else
                homeTown.insert({popularity, content});
        }

        set<pair<int, string>>::reverse_iterator itr;

        for (itr = homeTown.rbegin(); itr != homeTown.rend(); ++itr)
            cout << (*itr).second << endl;
        for (itr = notHomeTown.rbegin(); itr != notHomeTown.rend(); ++itr)
            cout << (*itr).second << endl;
    }

    return 0;
}