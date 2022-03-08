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
        string ans = "1";
        for (int i = 1; i < n; ++i)
        {
            string temp = "";
            char previous = ans[0];
            int count = 0;
            for (int j = 0; j < ans.length(); ++j)
            {
                count++;
                if (j == ans.length() - 1 || previous != ans[j + 1])
                {
                    temp += (count + 48);
                    temp += previous;
                    previous = ans[j + 1];
                    count = 0;
                }
            }
            ans = temp;
        }

        cout << ans << endl;
    }

    return 0;
}