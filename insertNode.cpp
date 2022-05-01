// Complete the insertSortedNode function below.
/*
For your reference:
SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *insertSortedNode(SinglyLinkedListNode *head, int value)
{
    // write your code here
    SinglyLinkedListNode *top = head;
    SinglyLinkedListNode *prevNode = NULL;
    int previous = -1;

    if (head->next == NULL)
    {
        SinglyLinkedListNode *newNode = new SinglyLinkedListNode(value);
        if (value > head->data)
        {
            head->next = newNode;
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
        return top;
    }

    while (head != NULL)
    {
        if (previous <= value && (value <= head->data || head->next == NULL))
        {
            SinglyLinkedListNode *newNode = new SinglyLinkedListNode(value);
            if (prevNode == NULL)
            {
                newNode->next = top;
                top = newNode;
            }
            else if (head->next == NULL)
            {
                head->next = newNode;
            }
            else
            {
                prevNode->next = newNode;
                newNode->next = head;
            }
            break;
        }
        else
        {
            prevNode = head;
            previous = head->data;
            head = head->next;
        }
    }

    return top;
}
