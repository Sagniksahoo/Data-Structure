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
void print(Node *head)
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
    head = temp;
}
void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    Node *temp = head;
    if (position == 1)
    {
        InsertAthead(head, data);
        return;
    }
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void Deletion(int position, Node *&head, Node *&tail)
{
    // deletion at start or first position
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting and midddel node or last node
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
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;
    print(head);
    InsertAthead(head, 20);
    print(head);
    InsertAthead(head, 30);
    print(head);
    InsertAtTail(tail, 40);
    print(head);
    InsertAtTail(tail, 50);
    print(head);
    InsertAtTail(tail, 60);
    print(head);
    InsertAtPosition(head, tail, 3, 70);
    print(head);
    cout << "Head" << head->data << endl;
    cout << "Tail" << tail->data << endl;
    Deletion(7, head, tail);
    print(head);
    cout << "Head" << head->data << endl;
    cout << "Tail" << tail->data << endl;
    return 0;
}