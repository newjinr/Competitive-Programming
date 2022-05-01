// Complete the arrangeVowCon function below.

/*
For your reference:

SinglyLinkedListNode {
char data;
SinglyLinkedListNode* next;
};
To create a new node below constructor is provided
SinglyLinkedListNode(char node_data)
*/

SinglyLinkedListNode *arrangeVowCon(SinglyLinkedListNode *head)
{
    // write your code here
    SinglyLinkedListNode *vow = NULL;
    SinglyLinkedListNode *con = NULL;
    SinglyLinkedListNode *V;
    SinglyLinkedListNode *C;

    while (head != NULL)
    {
        SinglyLinkedListNode *node = new SinglyLinkedListNode(head->data);
        if (head->data == 'a' || head->data == 'e' || head->data == 'i' || head->data == 'o' || head->data == 'u')
        {
            if (vow == NULL)
            {
                vow = node;
                V = vow;
            }
            else
            {
                vow->next = node;
                vow = vow->next;
            }
        }
        else
        {
            if (con == NULL)
            {
                con = node;
                C = con;
            }
            else
            {
                con->next = node;
                con = con->next;
            }
        }
        head = head->next;
    }

    if (con == NULL)
        return V;
    if (vow == NULL)
        return C;
    vow->next = C;
    return V;
}
