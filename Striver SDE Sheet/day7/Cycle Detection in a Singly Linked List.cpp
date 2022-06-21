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

bool detectCycle(Node *head)
{
   Node *a=head;
    Node *b=head;
    if(head==NULL) return false;
    while(a!=NULL&&b!=NULL&&b->next!=NULL)
    {
        a=a->next;
        b=b->next->next;
        if(a==b) return true;
    }
    return false;
    
	//	Write your code here
}