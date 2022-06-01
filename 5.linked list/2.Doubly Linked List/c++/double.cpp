#include <iostream>
#include <conio.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
int length(Node *head)
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
void printNodes(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void InsertAthead(Node *&head, int data)
{
    
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAttail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void InsertPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        InsertAthead(head, data);
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
        insertAttail(tail, data);
        return;
    }
    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
}
int main()
{
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;
    printNodes(head);
    InsertAthead(head, 9);
    printNodes(head);
    InsertAthead(head, 8);
    printNodes(head);
    InsertAthead(head, 7);
    printNodes(head);
    InsertAthead(head, 6);
    printNodes(head);
    cout << "The length of the linked list is " << length(head) << endl;
    insertAttail(tail, 11);
    printNodes(head);
    insertAttail(tail, 13);
    printNodes(head);
    insertAttail(tail, 14);
    printNodes(head);
    insertAttail(tail, 15);
    printNodes(head);
    insertAttail(tail, 16);
    printNodes(head);
    cout << "The length of the linked list is " << length(head) << endl;
    InsertPosition(head, tail, 1, 200);
    printNodes(head);
    InsertPosition(head, tail, 12, 200);
    printNodes(head);
    cout << "The length of the linked list is " << length(head) << endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"TAil: "<<tail->data<<endl;
    return 0;
}