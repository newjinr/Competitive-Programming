// Complete the lastElementFirst function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *lastElementFirst(SinglyLinkedListNode *head)
{
    // write your code here
    SinglyLinkedListNode *top = head;
    SinglyLinkedListNode *last;
    if (head->next == NULL)
        return head;
    while (head->next->next != NULL)
        head = head->next;

    last = head->next;
    head->next = NULL;
    last->next = top;
    head = last;
    return head;
}
