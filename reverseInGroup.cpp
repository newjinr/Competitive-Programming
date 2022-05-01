// Complete the reverseKnodes function below.
/*
For your reference:
SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use the below constructor
SinglyLinkedListNode(int node_data)
*/
SinglyLinkedListNode *reverseKnodes(SinglyLinkedListNode *head, int k)
{
    // write your code here
    SinglyLinkedListNode *top, *prev = NULL, *next, *pointer;

    while (head != NULL)
    {
        SinglyLinkedListNode *tempPrev = NULL;
        int temp = k;
        while (temp-- && head != NULL)
        {
            next = head->next;
            head->next = tempPrev;
            tempPrev = head;
            head = next;
        }
        if (prev == NULL)
        {
            prev = tempPrev;
            top = prev;
        }
        else
        {
            while (prev->next != NULL)
                prev = prev->next;
            prev->next = tempPrev;
        }
    }
    return top;
}
