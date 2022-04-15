#include <bits/stdc++.h>
using namespace std;

class LinkedList
{
    int length = 0;

public:
    struct Node
    {
        int value;
        struct Node *next;
    } *first = NULL, *last;

    void add(int x);
    int size()
    {
        return length;
    }
    void iterator();
};

void LinkedList::add(int x)
{
    if (first == NULL)
    {
        struct Node *node = new Node;
        node->value = x;
        node->next = NULL;
        first = node;
        last = first;
    }
    else
    {
        struct Node *node = new Node;
        node->value = x;
        node->next = NULL;
        last->next = node;
        last = node;
    }
    length++;
}

void LinkedList::iterator()
{
    struct Node *head = first;
    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }
}

int main()
{
    LinkedList *list = new LinkedList();
    list->add(2);
    list->add(4);
    list->add(7);
    list->iterator();

    return 0;
}