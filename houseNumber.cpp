#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long n;
        cin >> n;

        int length1 = 0;
        int length2 = 1;
        unsigned long long temp = n;

        while (temp)
        {
            length1++;
            temp /= 10;
        }

        unsigned long long num1 = 9;
        unsigned long long num2 = 0;
        unsigned long long ans = 0;

        while (length1 >= length2)
        {
            if (num1 < n)
                ans += (num1 - num2) * length2;
            else
                ans += (n - num2) * length2;
            num2 = num1;
            num1 = (num1 * 10) + 9;
            length2++;
        }
        cout << ans << endl;
    }

    return 0;
}