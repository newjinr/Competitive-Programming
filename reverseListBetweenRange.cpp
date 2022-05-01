// Complete the reverseInRange function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *reverseInRange(SinglyLinkedListNode *head, int l, int r)
{
    // write your code here
    SinglyLinkedListNode *top = head, *rev, *prev = NULL, *reversed = NULL, *next;
    int temp = l;

    while (temp-- > 1)
    {
        prev = head;
        head = head->next;
    }

    temp = r - l + 1;
    while (temp--)
    {
        next = head->next;
        head->next = reversed;
        reversed = head;
        head = next;
    }
    if (prev != NULL)
        prev->next = reversed;
    rev = reversed;

    while (reversed->next != NULL)
        reversed = reversed->next;

    if (head != NULL)
        reversed->next = head;
    if (prev == NULL)
        return rev;
    return top;
}
