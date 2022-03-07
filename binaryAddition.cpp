#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string A, B;
        cin >> A >> B;
        int p1 = A.length() - 1;
        int p2 = B.length() - 1;
        int carry = 0;
        string ans = "";

        while (p1 >= 0 || p2 >= 0)
        {
            if (p1 >= 0 && p2 >= 0)
            {
                int add = (A[p1] - 48) + (B[p2] - 48) + carry;
                carry = 0;
                if (add == 1)
                    ans += '1';
                else if (add == 2)
                {
                    carry = 1;
                    ans += '0';
                }
                else if (add == 3)
                {
                    carry = 1;
                    ans += '1';
                }
                else
                    ans += '0';
                p1--;
                p2--;
            }
            else if (p1 >= 0)
            {
                if (carry > 0 && A[p1] == '1')
                    ans += '0';
                else if (carry > 0 && A[p1] == '0')
                {
                    ans += '1';
                    carry = 0;
                }
                else
                    ans += A[p1];
                p1--;
            }
            else if (p2 >= 0)
            {
                if (carry > 0 && B[p2] == '1')
                    ans += '0';
                else if (carry > 0 && B[p2] == '0')
                {
                    ans += '1';
                    carry = 0;
                }
                else
                    ans += B[p2];
                p2--;
            }
        }
        if (carry == 1)
            ans += '1';
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}