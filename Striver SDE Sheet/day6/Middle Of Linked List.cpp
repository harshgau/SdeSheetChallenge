#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int len(Node *&head)
{
    int ans=0;
    Node *curr=head;
    while(curr!=NULL)
    {
        ans++;
        curr=curr->next;
    }
    return ans;
}
Node *findMiddle(Node *head) {
    int mid=len(head)/2+1;
    int cnt=1;
    Node *ans=head;
    while(cnt!=mid)
    {
        cnt++;
        ans=ans->next;
    }
    return ans;
    // Write your code here
}