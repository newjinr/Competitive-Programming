// Complete the rotateDoublyList function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
SinglyLinkedListNode* prev;
};
To create a new node use the below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *rotateDoublyList(SinglyLinkedListNode *head, int k)
{
    // write your code here
    SinglyLinkedListNode *top = head;
    SinglyLinkedListNode *nexNode;

    if (head->next == NULL)
        return top;

    int i = 0;
    while (head->next != NULL)
    {
        SinglyLinkedListNode *tempNode = head->next;
        i++;
        if (i + 1 == k && head->next->next == NULL)
            return top;

        if (i == k)
        {
            nexNode = head->next;
            head->next->prev = NULL;
            head->next = NULL;
        }
        head = tempNode;
    }

    head->next = top;
    top->prev = head;
    return nexNode;
}
