#include "list_header.h"
int main()
{
    LinkedList *l = new LinkedList();
    int ch,e;
    do
    {
        cout<<"\t==========MENU==========\n";
        cout<<"\t\t1.Insert\n";
        cout<<"\t\t2.Reverse\n";
        cout<<"\t\t3.Display\n";
        cout<<"\t\t4.Exit\n";
        cout<<"\t========================\n";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter an element : ";
                cin>>e;
                l->insert(e);
                break;
            case 2:
                l->reverse(l->head);
                cout<<"\nLinked list reversed.\n\n";
                break;
            case 3:
                l->display();
                break;
            case 4:
                break;
            default:
                cout<<"\nEnter a valid choice.\n\n";
                break;
        }
    }while(ch!=4);
}