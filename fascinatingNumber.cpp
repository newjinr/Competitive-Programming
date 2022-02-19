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
        n++;
        int A[4];
        int temp = n;
        int found = 0;
        set<int> set;
        for (int i = 3; i >= 0; i--)
        {
            A[i] = temp % 10;
            temp /= 10;
        }

        while (found < 4)
        {
            for (int i = 0; i < 4; i++)
            {
                if (set.count(A[i]) == 0)
                    set.insert(A[i]);
                else
                {
                    while (set.count(A[i]) != 0)
                        A[i]++;
                    set.insert(A[i]);
                    for (int j = i + 1; j < 4; j++)
                        A[j] = 0;
                    if (A[i] == 10)
                    {
                        while (A[i] == 10)
                        {
                            A[i] = 0;
                            if (i > 0)
                                A[i - 1]++;
                            i--;
                        }
                        i = -1;
                        set.clear();
                    }
                }
            }

            set.clear();
            for (int i = 0; i < 4; i++)
            {
                if (set.count(A[i]) == 0)
                {
                    set.insert(A[i]);
                    found++;
                }
                else
                {
                    found = 0;
                    break;
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < 4; i++)
            ans = (ans * 10) + A[i];
        cout << ans << endl;
    }

    return 0;
}