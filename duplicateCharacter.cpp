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
        bool flag = true;
        for (int i = 0; i < s.length(); ++i)
            A[s[i] - 97]++;

        for (int i = 0; i < 26; ++i)
            if (A[i] > 1)
            {
                flag = false;
                cout << (char)(i + 97) << "=" << A[i] << " ";
            }
        if (flag)
            cout << -1;
        cout << endl;
    }
    return 0;
}