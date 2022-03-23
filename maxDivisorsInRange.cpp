#include <bits/stdc++.h>
using namespace std;

int findIndex(vector<int> a, int z, int n, int low, int high)
{
    int mid = (z + n) / 2;
    if (((mid < n && a[mid + 1] > high) || (a[mid] == high) || (a[mid] < high && mid == n)) && (a[mid] >= low && a[mid] <= high))
        return mid;

    if (mid < 0 || mid >= n)
        return -1;

    if (a[mid] > high)
        return findIndex(a, z, mid - 1, low, high);
    if (a[mid] < high)
        return findIndex(a, mid + 1, n, low, high);
    return -1;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    // write your code here
    int a, b;
    cin >> a >> b;
    int q;
    cin >> q;

    vector<int> divisor;
    for (int i = 1; i <= gcd(a, b); i++)
        if (a % i == 0 && b % i == 0)
            divisor.push_back(i);
    cout << "Divisors" << endl;
    for (auto a : divisor)
        cout << a << " ";
    cout << endl;

    while (q--)
    {
        int low, high;
        cin >> low >> high;
        int index = findIndex(divisor, 0, divisor.size() - 1, low, high);
        (index == -1) ? cout << -1 << endl : cout << divisor[index] << endl;
    }

    return 0;
}
