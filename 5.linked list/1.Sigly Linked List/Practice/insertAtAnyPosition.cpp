#include <iostream>
#include <conio.h>
using namespace std;
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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<"  ";
        temp = temp->next;
    }
    cout<<endl;
}
void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
void InsertAtPosition(Node *&Head, Node *&tail, int position, int data)
{
    Node *temp = Head;
    // for insert at 1st posittion
    if (position == 1)
    {
        InsertAtHead(Head, data);
        return;
    }
    // For insert at last position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    
    // creating a node for data
     Node *nodetoinsert=new Node(data);
     nodetoinsert->next =temp->next;
     temp->next = nodetoinsert;
}
int main()
{
    Node *node = new Node(9);
    Node *head=node;
    Node *tail=node;
    InsertAtHead(head, 2);
    print(head);
    InsertAtHead(head, 1);
    print(head);
    InsertAtHead(head, 3);
    print(head);
    InsertAtTail(tail, 5);
    print(head);
    InsertAtTail(tail, 6);
    print(head);
    InsertAtPosition(head, tail, 5, 4);
    print(head);
    return 0;
}