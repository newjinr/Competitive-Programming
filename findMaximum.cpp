#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n;
    cin >> n;
    int A[n], smallest[n], largest[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        if (i == 0)
            smallest[i] = A[i];
        else if (A[i] < smallest[i - 1])
            smallest[i] = A[i];
        else
            smallest[i] = smallest[i - 1];
    }

    for (int i = n - 1; i >= 0; --i)
    {
        if (i == n - 1)
            largest[i] = A[i];
        else if (A[i] > largest[i + 1])
            largest[i] = A[i];
        else
            largest[i] = largest[i + 1];
    }

    int p2 = n - 1;
    int ans = -1;
    int seenElement = -1;

    while (p2 >= 0)
    {
        int p1 = 0;
        while (p1 < p2 && seenElement != largest[p2])
        {
            if (smallest[p1] < largest[p2])
            {
                if (ans < (p2 - p1))
                    ans = p2 - p1;
                break;
            }
            p1++;
        }
        seenElement = largest[p2];
        p2--;
    }

    cout << ans << endl;

    return 0;
}