#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int k)
{
    if(head==NULL||k==0) return head;
    LinkedListNode<int>* ans=new LinkedListNode<int> (1);
    LinkedListNode<int> *fast=ans;
    LinkedListNode<int>*slow=ans;
    ans->next=head;
    for(int i=0;i<k;i++)
    {
        fast=fast->next;
    }
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return ans->next;
    // Write your code here.
}