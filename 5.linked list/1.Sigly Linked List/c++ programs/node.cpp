#include <iostream>
#include <conio.h>
using namespace std;
class LinkedNode
{
public:
    int data;
    LinkedNode *next;
    LinkedNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtHead(LinkedNode *&head, int data)
{
    // New node create
    LinkedNode *temp = new LinkedNode(data);
    temp->next = head;
    head = temp;
}
void print(LinkedNode *head)
{
    LinkedNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // created a new node
    LinkedNode *node = new LinkedNode(19);
    // cout << node->data << endl;
    // cout << node->next << endl;
    // Head pointed to node
    LinkedNode *head = node;
    print(head);
    InsertAtHead(head, 12);
    print(head);
    InsertAtHead(head, 10);
    print(head);
    return 0;
}