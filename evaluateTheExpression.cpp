#include <bits/stdc++.h>
using namespace std;
#define ll long long

void evaluate(ll &num1, ll &num2, stack<ll> &expression)
{
    num2 = expression.top();
    expression.pop();
    num1 = expression.top();
    expression.pop();
    expression.push(num1 + num2);
}

int main()
{
    // write your code here
    int n;
    cin >> n;
    stack<ll> expression;

    for (int i = 0; i < n; ++i)
    {
        string x;
        cin >> x;
        ll num1 = 0, num2 = 0;
        if (x == "+")
        {
            evaluate(num1, num2, expression);
            expression.push(num1 + num2);
        }
        else if (x == "-")
        {
            evaluate(num1, num2, expression);
            expression.push(num1 - num2);
        }
        else if (x == "/")
        {
            evaluate(num1, num2, expression);
            expression.push(num1 / num2);
        }
        else if (x == "*")
        {
            evaluate(num1, num2, expression);
            expression.push(num1 * num2);
        }
        else
        {
            int num = 0;
            for (int i = 0; i < x.length(); ++i)
                num = (num * 10) + (x[i] - 48);
            expression.push(num);
        }
    }

    cout << expression.top() << endl;

    return 0;
}