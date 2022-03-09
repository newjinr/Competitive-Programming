#include <bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
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
        cout << factorial(n) << endl;
    }
    return 0;
}