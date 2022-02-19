#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull power(int n, ull l)
{
    ull pow = 1;
    for (ull i = 0; i < l; i++)
        pow *= n;
    return pow;
}

ull findGoodNumber(ull n)
{
    for (ull i = 0; i < n; i++)
    {
        if (power(3, i) == n)
            return n;
        if (power(3, i) > n)
        {
            ull num = power(3, i - 1);
            long long balance = n - num;
            for (int j = i - 2; j >= 0; j--)
            {
                if (power(3, j) < balance || (power(3, j)) / 2 < balance)
                {
                    num += power(3, j);
                    balance = n - num;
                }
                if (balance <= 0)
                    break;
            }
            if (num >= n)
                return num;
            return power(3, i);
        }
    }
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        ull n;
        cin >> n;

        cout << findGoodNumber(n) << endl;
    }

    return 0;
}