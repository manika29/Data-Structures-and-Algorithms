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

Node* reverse(Node* head){
    if(head==NULL || head->next==NULL)
    return head;

    Node *prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;
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

    head=insertAtEnd(head,1);
    head=insertAtEnd(head,2);
    head=insertAtEnd(head,3);
    head=insertAtEnd(head,4);
    head=insertAtEnd(head,5);

    head=reverse(head);

    printList(head);
return 0;
}