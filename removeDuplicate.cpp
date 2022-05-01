// Complete the removeDuplicates function below.

/*
* For your reference:
*
* SinglyLinkedListNode {
*     int data;
*     SinglyLinkedListNode* next;
* };

To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*
*/
SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *head)
{
    // write your code here
    int previous = -1;
    SinglyLinkedListNode *top = head;
    SinglyLinkedListNode *preNode = head;

    while (head != NULL)
    {
        if (head->data != previous)
        {
            previous = head->data;
            preNode = head;
            head = head->next;
        }
        else
        {
            preNode->next = head->next;
            head = head->next;
        }
    }

    return top;
}
