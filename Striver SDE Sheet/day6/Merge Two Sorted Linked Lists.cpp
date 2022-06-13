// code 1
#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* a, Node<int>* b)
{
    Node<int>* ans;
    if(a==NULL)
        return b;
    else if(b==NULL)
        return a;
    if(a->data<=b->data)
    {
        ans=a;
        ans->next=sortTwoLists(a->next,b);
    }
    else
    {
        ans=b;
        ans->next=sortTwoLists(a,b->next);
    }
    
    return ans;
    
    
    // Write your code here.
}

// code 2
#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* a, Node<int>* b)
{
    
    if(a==NULL)
        return b;
    else if(b==NULL)
        return a;
    if(a->data>b->data)
    {
        swap(a,b);
    }
    Node<int>* ans=a;
    while(a!=NULL&&b!=NULL)
    {
        Node<int> *tmp=NULL;
        while(a!=NULL&&a->data<=b->data)
        {
            tmp=a;
            a=a->next;
        }
        tmp->next=b;
        swap(a,b);
    }
    
    return ans;
    
    
    // Write your code here.
}
