// Complete the reverseEvenEnd function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use the below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *reverseEvenEnd(SinglyLinkedListNode *head)
{
    // write your code here
    SinglyLinkedListNode *top = head;
    SinglyLinkedListNode *even = NULL, *odd = NULL, *E, *O, *temp;

    if (head->next == NULL)
        return head;

    while (head != NULL)
    {
        SinglyLinkedListNode *node = new SinglyLinkedListNode(head->data);
        temp = head->next;
        if (head->data & 1)
        {
            if (odd == NULL)
            {
                odd = node;
                O = odd;
            }
            else
            {
                odd->next = node;
                odd = odd->next;
            }
        }
        else
        {
            head->next = even;
            even = head;
            E = head;
        }
        head = temp;
    }
    if (odd == NULL)
        return E;
    if (even == NULL)
        return O;
    odd->next = E;
    return O;
}
