#include "list_header.h"
void LinkedList::insert(int d)
{
    Node *n = new Node();
    n->data = d;
    n->next = NULL;
    if(head == NULL)
    {
        head = n;
    }
    else
    {
        Node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = n;
    }
    cout<<"\nNode inserted.\n\n";
}
Node* LinkedList::reverse(Node* n)
{
    if(n == NULL || n->next == NULL) 
    {
        head = n;
        return head;
    }
    Node* rev = reverse(n->next);
    rev->next = n;
    n->next = NULL;
    return n;
}
void LinkedList::display()
{
    if(head == NULL)
        cout<<"\nList is empty.\n\n";
    else
    {
        cout<<"\nList : ";
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data;
            if(temp->next!=NULL)
                cout<<" -> ";
            temp=temp->next;
        }
        cout<<"\n\n";
    }
}