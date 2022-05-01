// Complete the addOneToList function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *addOneToList(SinglyLinkedListNode *head)
{
    // write your code here
    int n = 0;

    while (head != NULL)
    {
        n = (n * 10) + head->data;
        head = head->next;
    }

    n++;

    SinglyLinkedListNode *newList = NULL;
    SinglyLinkedListNode *top;
    SinglyLinkedListNode *newNode;

    SinglyLinkedListNode *prevNode = NULL;
    SinglyLinkedListNode *nextNode;

    while (n)
    {
        newNode = new SinglyLinkedListNode(n % 10);
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
        n /= 10;
    }
    head = top;

    while (head != NULL)
    {
        nextNode = head->next;
        head->next = prevNode;
        prevNode = head;
        head = nextNode;
    }
    return prevNode;
}
