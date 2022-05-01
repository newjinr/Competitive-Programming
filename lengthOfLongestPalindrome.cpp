// Complete the longestPalindrome function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

int longestPalindrome(SinglyLinkedListNode *head)
{
    // write your code here
    SinglyLinkedListNode *top = head, *reversed = NULL, *next, *curr;
    int len = 1;

    while (head != NULL)
    {
        next = head->next;
        head->next = reversed;
        reversed = head;
        curr = reversed;
        head = next;
        if (next != NULL && next->data == reversed->data)
        {
            int j = 0;
            while (reversed != NULL && head != NULL && reversed->data == head->data)
            {
                j++;
                reversed = reversed->next;
                head = head->next;
            }
            len = max(len, 2 * j);
        }
        reversed = curr;
        if (next != NULL && next->next != NULL && next->next->data == reversed->data)
        {
            int j = 0;
            head = next->next;
            while (reversed != NULL && head != NULL && reversed->data == head->data)
            {
                j++;
                reversed = reversed->next;
                head = head->next;
            }
            len = max(len, 2 * j + 1);
        }
        reversed = curr;
        head = next;
    }

    return len;
}
