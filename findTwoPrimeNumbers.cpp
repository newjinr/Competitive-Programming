#include <bits/stdc++.h>
using namespace std;

bool findPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
        if (n % 2 == 0)
            return false;

    return true;
}

int main()
{

    int n;
    cin >> n;

    set<int> primeNumbers;
    bool found = false;

    for (int i = 2; i < n; i++)
    {
        if (findPrime(i))
        {
            int diff = n - i;
            if (primeNumbers.count(diff) == 1 || i + i == n)
            {
                found = true;
                break;
            }
            else
                primeNumbers.insert(i);
        }
    }

    (found) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}