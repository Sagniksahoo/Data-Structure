#include <iostream>
#include <conio.h>
using namespace std;
class Node
{
public:
    int data;
    Node *pre;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->pre = NULL;
        this->next = NULL;
    }
};
void printt(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// !For length
int getLength(Node *head)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
//! For insert at Head
void insertAtHead(Node *&head, Node *&tail, int data)
{
    //*Empty list
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->pre = temp;
        head = temp;
    }
}
//! For insert at Tail
void InsertAttail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->pre = tail;
        tail = temp;
    }
}
//! For insert at position
void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    //*insert at position Head
    if (position == 1)
    {
        insertAtHead(head,tail, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        InsertAttail(head,tail, data);
        return;
    }
    //! creating a node for data
    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->pre = temp;
}
int main()
{
    //Node *node = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    printt(head);
    cout << "The length of the linked list is " << getLength(head) << endl;
    insertAtHead(head,tail, 11);
    printt(head);
    insertAtHead(head,tail, 12);
    printt(head);
    insertAtHead(head,tail, 13);
    printt(head);
    insertAtHead(head,tail, 14);
    printt(head);
    cout << "The length of the linked list is " << getLength(head) << endl;
    InsertAttail(head,tail, 15);
    printt(head);
    InsertAttail(head,tail, 16);
    printt(head);
    InsertAttail(head,tail, 17);
    printt(head);
    InsertAttail(head,tail, 18);
    printt(head);
    cout << "The length of the linked list is " << getLength(head) << endl;
    InsertAtPosition(head, tail, 3, 190);
    printt(head);
    InsertAtPosition(head, tail, 1, 666);
    printt(head);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
    InsertAtPosition(head, tail, 11, 888);
    printt(head);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
    return 0;
}