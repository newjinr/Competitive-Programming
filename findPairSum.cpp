// Complete the findPair() function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

class DoublyLinkedListNode
{
public:
    int data;
    DoublyLinkedListNode *next = NULL;
    DoublyLinkedListNode *prev = NULL;

    DoublyLinkedListNode(int d)
    {
        data = d;
    }

    DoublyLinkedListNode() {}
};

int findPair(SinglyLinkedListNode *head, int k)
{
    // write your code here
    SinglyLinkedListNode *temp;
    DoublyLinkedListNode *top = NULL, *newNode, *node, *end;
    int ans = 0;

    while (head != NULL)
    {
        newNode = new DoublyLinkedListNode(head->data);
        if (top == NULL)
        {
            node = newNode;
            top = node;
        }
        else
        {
            node->next = newNode;
            newNode->prev = node;
            node = node->next;
            end = node;
        }
        head = head->next;
    }

    while (top->data <= end->data && top != end && top->prev != end)
    {
        if (top->data + end->data >= k)
        {
            if (top->data + end->data == k)
            {
                ans++;
                end = end->prev;
                top = top->next;
            }
            else
                end = end->prev;
        }
        else
            top = top->next;
    }

    return ans;
}
