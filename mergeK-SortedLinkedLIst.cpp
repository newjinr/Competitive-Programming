// Complete the mergeKLists() function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *mergeKLists(vector<SinglyLinkedListNode *> &headLists)
{
    // write your code here
    SinglyLinkedListNode *ans = headLists[0], *top;
    int index = 0;
    for (int i = 0; i < headLists.size(); ++i)
    {
        if (ans->data > headLists[i]->data)
        {
            index = i;
            ans = headLists[i];
        }
    }
    // cout << index << endl;
    top = ans;
    headLists[index] = headLists[index]->next;

    while (true)
    {
        int j = 0;
        bool flag = false;
        for (int i = 0; i < headLists.size(); ++i)
        {
            if (headLists[i] == NULL)
                j++;
            else if (headLists[i] != NULL)
            {
                if (!flag)
                {
                    ans->next = headLists[i];
                    index = i;
                    flag = true;
                    // ans = ans->next;
                }
                else
                {
                    if (ans->data <= headLists[i]->data && ans->next->data >= headLists[i]->data)
                    {
                        ans->next = headLists[i];
                        index = i;
                        // ans = ans->next;
                    }
                }
            }
        }
        if (flag)
        {
            headLists[index] = headLists[index]->next;
            ans = ans->next;
        }
        if (j == headLists.size())
            break;
    }
    ans->next = NULL;
    return top;
}
