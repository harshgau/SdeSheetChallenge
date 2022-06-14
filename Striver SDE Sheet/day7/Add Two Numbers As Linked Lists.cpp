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

Node *addTwoNumbers(Node *a, Node *b)
{
    Node *dummy=new Node(0);
    Node *temp=dummy;
    int c=0;
    while(a!=NULL||b!=NULL||c!=0)
    {
        int sum=0;
        if(a!=NULL)
        {
            sum+=a->data;
            a=a->next;
        }
        if(b!=NULL)
        {
            sum+=b->data;
            b=b->next;
        }
        sum+=c;
        c=sum/10;
        Node *node= new Node(sum%10);
        temp->next=node;
        temp=temp->next;
    }
    return dummy->next;
    // Write your code here.
}