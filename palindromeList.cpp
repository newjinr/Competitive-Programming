// Complete the palindromeLlist function below.
/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/
bool palindromeLlist(SinglyLinkedListNode *head)
{
    // write your code here

    SinglyLinkedListNode *newList = NULL;
    SinglyLinkedListNode *top;
    SinglyLinkedListNode *newNode;

    SinglyLinkedListNode *prevNode = NULL;
    SinglyLinkedListNode *nextNode;

    while (head != NULL)
    {
        newNode = new SinglyLinkedListNode(head->data);
        if (newList == NULL)
        {
            newList = newNode;
            top = newList;
        }
        else
        {
            newList->next = newNode;
            newList = newList->next;
        }
        nextNode = head->next;
        head->next = prevNode;
        prevNode = head;
        head = nextNode;
    }
    newList = top;
    while (prevNode != NULL)
    {
        if (prevNode->data != newList->data)
            return false;
        prevNode = prevNode->next;
        newList = newList->next;
    }

    return true;
}
