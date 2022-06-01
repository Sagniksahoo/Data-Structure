#include <iostream>
#include <conio.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};
void InsertAtHead(Node *&Head,int data){
    Node *temp=new Node(data);
    temp->next=Head;
    Head=temp;
}
void InsertAtTail(Node *&tail,int data){
    Node *temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node *node=new Node(3);
    Node *head=node;
    Node *tail=node;
    // print(head);
    // InsertAtHead(head,2);
    // print(head);
    // InsertAtHead(head,1);
    // print(head);
    print(head);
    InsertAtTail(tail,2);
    print(head);
    InsertAtTail(tail,1);
    print(head);
       return 0;
}