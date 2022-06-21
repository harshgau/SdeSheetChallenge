#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
    if(head==NULL) return head;
    Node *ans=head;
    int cnt=1;
    while(ans->next!=NULL)
    {
        cnt++;
        ans=ans->next;
    }
    ans->next=head;
    k=k%cnt;
    k=cnt-k;
    while(k--)
    {
        ans=ans->next;
    }
    head=ans->next;
    ans->next=NULL;
    return head;
     // Write your code here.
}