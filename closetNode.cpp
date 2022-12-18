#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;

    Node()
    {
        val = 0;
        left = nullptr;
        right = nullptr;
    }

    Node(int x, Node *left, Node *right)
    {
        val = x;
        this->left = left;
        this->right = right;
    }
};

int main()
{
    int n;
    cin >> n;
    Node root;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if ()
    }
    return 0;
}