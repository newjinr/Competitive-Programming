#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int A[26]{0};
        for (int i = 0; i < s.length(); ++i)
            A[s[i] - 97]++;

        for (int i = 25; i >= 0; --i)
            for (int j = 0; j < A[i]; ++j)
            {
                char t = i + 97;
                cout << t;
            }

        cout << endl;
    }
    return 0;
}