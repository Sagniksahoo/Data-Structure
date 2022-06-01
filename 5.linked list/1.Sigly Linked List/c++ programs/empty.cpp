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
void InsertAtHead(Node *&head, Node *&tail, int data)
{
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
        head = temp;
    }
}
void InsertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = tail->next;
    }
}
void InsertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    Node *temp = head;
    //! insert at Start
    if (position == 1)
    {
        InsertAtHead(head,tail, data);
        return;
    }

    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    //! Inserting at last element
    if (temp->next == NULL)
    {
        InsertAtTail(head,tail, data);
        return;
    }

    // creating a node for data
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    // print(head);
    InsertAtHead(head,tail,2);
    print(head);
    InsertAtHead(head,tail,1);
    print(head);
    print(head);
    InsertAtTail(head,tail, 2);
    print(head);
    InsertAtTail(head,tail, 1);
    print(head);
    InsertAtPosition(tail, head, 3, 22);
    print(head);
     InsertAtPosition(tail, head, 6, 22);
    print(head);
    cout << "Head" << head->data << endl;
    cout << "Tail" << tail->data << endl;
    return 0;
}