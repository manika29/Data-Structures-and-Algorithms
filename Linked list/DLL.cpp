#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};

//Insert at begin
Node* insertAtBegin(Node* head,int value){
    Node* newNode=new Node(value);
    if(head==NULL)
    return newNode;

    newNode->next=head;
    head->prev=newNode;
    return newNode;
}

//Insert at end
Node* insertAtEnd(Node* head, int value){

     Node* newNode=new Node(value);
    if(head==NULL)
    return newNode;

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
  
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}

//Delete first node
Node* deleteFirst(Node* head){
    if(head==NULL)
    return head;

    Node* temp=head;
    head=temp->next;
    head->prev=NULL;
    delete temp;

    return head;
}


//Delete last node
Node* deleteLast(Node* head){
    if(head==NULL)
    return head;

    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }

    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }

delete (temp->next);
temp->next=NULL;
return head;
}


//Print List
void printList(Node *head){

    if(head==NULL)
    return;

    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

    Node* head=NULL;
    // head=insertAtBegin(head,1);
    // head=insertAtBegin(head,2);
    // head=insertAtBegin(head,3);
    // head=insertAtBegin(head,4);
    // head=insertAtBegin(head,5);

    head=insertAtEnd(head,1);
    head=insertAtEnd(head,2);
    head=insertAtEnd(head,3);
    head=insertAtEnd(head,4);
    head=insertAtEnd(head,5);

    head=deleteLast(head);
    printList(head);
return 0;
}