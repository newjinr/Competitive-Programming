// Complete the printMidElement function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

void printMidElement(SinglyLinkedListNode *head)
{
    // write your code here
    int n = 0;
    SinglyLinkedListNode *top = head;

    while (head != NULL)
    {
        n++;
        head = head->next;
    }

    if (n && 1)
        n /= 2;
    else
        n = (n / 2) + 1;

    while (n--)
        top = top->next;

    cout << top->data << endl;
}
