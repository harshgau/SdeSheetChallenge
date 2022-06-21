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

Node *firstNode(Node *head)
{
    Node *a=head;
    Node *b=head;
    Node *ans=head;
    if(head==NULL) return NULL;
    while(b->next!=NULL&&b->next->next!=NULL)
    {
        a=a->next;
        b=b->next->next;
        if(a==b)
        {
            while(a!=ans)
            {
                a=a->next;
                ans=ans->next;
            }
            return ans;
        }
    }
    
    return NULL;
	//    Write your code here.
}