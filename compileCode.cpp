#include <bits/stdc++.h>
using namespace std;

int absDiff(int x, int y)
{
    if (x > y)
        return x - y;
    return y - x;
}

int findCompileCode(string s)
{
    int ans = 0;

    stack<pair<char, int>> st;

    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '<')
            st.push({s[i], i});
        else if (st.size() > 0 && st.top().first == '<')
            st.pop();
        else
            st.push({s[i], i});
    }

    int next = 0;

    while (st.size() > 0)
    {
        next = st.top().second;
        st.pop();
    }
    ans = max(ans, next);
    return ans;
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << findCompileCode(s) << endl;
    }
    return 0;
}