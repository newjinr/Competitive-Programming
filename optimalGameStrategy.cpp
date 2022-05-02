#include <bits/stdc++.h>
using namespace std;

class DoublyLinkedList
{
public:
    int data;
    DoublyLinkedList *next = NULL;
    DoublyLinkedList *prev = NULL;
    DoublyLinkedList(int d)
    {
        data = d;
    }
    DoublyLinkedList(){};
};
class Stack
{
    DoublyLinkedList *head = NULL, *node = NULL, *newNode, *prev = NULL, *reversed = NULL, *next;

public:
    void push(int data)
    {
        newNode = new DoublyLinkedList(data);
        if (head == NULL)
            node = newNode;
        else
        {
            node->next = newNode;
            newNode->prev = node;
            node = node->next;
        }
        head = node;
    }
    int pop()
    {
        if (head == NULL)
            return -1;
        int d = head->data;
        head = head->prev;
        if (head != NULL)
            head->next = NULL;
        return d;
    }
    int top()
    {
        if (head == NULL)
            return NULL;
        return head->data;
    }
    void reverse()
    {
        while (node != NULL)
        {
            head = node;
            next = node->prev;
            reversed = node;
            if (prev == NULL)
            {
                reversed->next = NULL;
                reversed->prev = NULL;
            }
            else
            {
                reversed->next = NULL;
                reversed->prev = prev;
                prev->next = reversed;
            }
            prev = reversed;
            node = next;
        }
    }
};

int main()
{
    // write your code here
    int n;
    cin >> n;
    Stack *x = new Stack();
    Stack *y = new Stack();
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        x->push(a);
        y->push(a);
    }
    x->reverse();
    while (x->top() != NULL && y->top() != NULL)
    {
        if (x->top() == y->top())
        {
            cout << 0 << " ";
            x->pop();
            y->pop();
        }
        else if (x->top() > y->top())
        {
            cout << 1 << " ";
            y->pop();
        }
        else
        {
            cout << 2 << " ";
            x->pop();
        }
    }
    return 0;
}