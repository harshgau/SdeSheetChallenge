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

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
    Node *dummy=new Node(0);
    dummy->next=head; 
    
    Node *prev=dummy;
    Node *curr=dummy;
    Node *nxt=dummy;
    int cnt=0;
    
    while(curr->next!=NULL)
    {
        cnt++;
        curr=curr->next;
    }
    int j=0;
    while(j<n&&cnt>0)
    {
        curr=prev->next;
        nxt=curr->next;
        int x=(b[j]<=cnt)?b[j]:cnt;
        if(x==0) 
        {
            j++;
            continue;
        }
        for(int i=1;i<x;i++)
        {
            curr->next=nxt->next;
            nxt->next=prev->next;
            prev->next=nxt;
            nxt=curr->next;
        }
        prev=curr;
        cnt-=b[j];
        j++;
    }
    return dummy->next;
	// Write your code here.
}