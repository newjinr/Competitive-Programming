#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n], B[n];
    int maxElement = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        maxElement = max(maxElement, A[i]);
    }
    int C[maxElement + 1]{0};
    for (int i = 0; i < n; ++i)
    {
        C[A[i]]++;
    }
    for (int i = 1; i < maxElement + 1; ++i)
        C[i] += C[i - 1];
    for (int i = n - 1; i >= 0; --i)
    {
        B[--C[A[i]]] = A[i];
    }
    for (auto a : B)
        cout << a << " ";
    cout << endl;

    return 0;
}