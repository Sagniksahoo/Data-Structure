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
    // distructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data" << value << endl;
    }
};
void InsertAtHead(Node *&Head, int data)
{
    Node *temp = new Node(data);
    temp->next = Head;
    Head = temp;
}
void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
void InsertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    Node *temp = head;
    //! insert at Start
    if (position == 1)
    {
        InsertAtHead(head, data);
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
        InsertAtTail(tail, data);
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
void deleteNode(int position, Node *&head,Node *&tail)
{
    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // delete middle or last node
        Node *curr = head;
        Node *pre = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            pre = curr;
            curr = curr->next;
            cnt++;
        }
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
        if(pre->next==NULL){
            tail=pre;
        }
    }
}
int main()
{
    Node *node = new Node(3);
    Node *head = node;
    Node *tail = node;
    // print(head);
    // InsertAtHead(head,2);
    // print(head);
    // InsertAtHead(head,1);
    // print(head);
    print(head);
    InsertAtTail(tail, 2);
    print(head);
    InsertAtTail(tail, 1);
    print(head);
    InsertAtPosition(tail, head, 4, 22);
    print(head);
    cout << "Head" << head->data << endl;
    cout << "Tail" << tail->data << endl;

    deleteNode(4, head,tail);
    print(head);

    cout << "Head" << head->data << endl;
    cout << "Tail" << tail->data << endl;

    return 0;
}