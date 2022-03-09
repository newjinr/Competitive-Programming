#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
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
        cout << sumOfDigits(n) << endl;
    }
    return 0;
}