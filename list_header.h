#include <iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
};
class LinkedList
{
    public:
        Node *head;
        void insert(int d);
        Node* reverse(Node *head);
        void display();
};