#include <bits/stdc++.h>
using namespace std;

int main()
{
  // write your code here
  int n, k;
  cin >> n >> k;
  int A[n];

  for (int i = 0; i < n; ++i)
    cin >> A[i];
  sort(A, A + n);

  long long median = A[n / 2];
  int mid = (n / 2) + 1;

  while (k > 0)
  {
    if (A[mid] > median)
    {
      if (k >= mid - n / 2)
      {
        median++;
        k -= mid - n / 2;
      }
      else
        break;
    }

    if (mid == n - 1 && A[mid] == median)
    {
      A[mid]++;
      k--;
    }

    if (median == A[mid] && mid != n - 1)
      mid++;
  }

  cout << median << endl;

  return 0;
}