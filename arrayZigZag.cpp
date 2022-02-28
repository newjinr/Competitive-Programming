#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int A[n];
    int B[n];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0 && A[i] <= A[i + 1])
        {
            even += A[i + 1] - A[i] + 1;
            A[i + 1] = A[i] - 1;
        }
        else if (i == n - 1)
        {
            if (i % 2 == 0 && A[i] <= A[i - 1])
            {
                even += A[i - 1] - A[i] + 1;
                A[i - 1] = A[i] - 1;
            }
            else if (i % 2 != 0 && B[i] <= B[i - 1])
            {
                odd += B[i - 1] - B[i] + 1;
                B[i - 1] = B[i] - 1;
            }
        }
        else if (i > 0)
        {
            if (i % 2 == 0)
            {
                if (A[i] <= A[i - 1])
                {
                    even += A[i - 1] - A[i] + 1;
                    A[i - 1] = A[i] - 1;
                }

                if (A[i] <= A[i + 1])
                {
                    even += A[i + 1] - A[i] + 1;
                    A[i + 1] = A[i] - 1;
                }
            }
            else
            {
                if (B[i] <= B[i - 1])
                {
                    odd += B[i - 1] - B[i] + 1;
                    B[i - 1] = B[i] - 1;
                }

                if (B[i] <= B[i + 1])
                {
                    odd += B[i + 1] - B[i] + 1;
                    B[i + 1] = B[i] - 1;
                }
            }
        }
    }
    cout << min(odd, even) << endl;
    return 0;
}