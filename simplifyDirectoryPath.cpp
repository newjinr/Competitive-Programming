#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    string s, x = "";
    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.length(); ++i)
    {
        if (i < s.length() - 1 && s[i] == '.' && s[i + 1] == '.' && st.size() > 0)
            st.pop();
        else if (s[i] != '.' && s[i] != '/')
            st.push(s[i]);
    }

    s = "";

    while (st.size() > 0)
    {
        x = st.top();
        s.insert(0, x);
        s.insert(0, "/");
        st.pop();
    }

    if (s.size() == 0)
        s = "/";

    cout << s << endl;

    return 0;
}