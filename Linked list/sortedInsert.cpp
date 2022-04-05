#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

//Insert at end
Node* insertAtEnd(Node* head,int value){
    Node* newNode=new Node(value);
    if(head==NULL)
    return newNode;

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
  
    temp->next=newNode;
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

//Sorted insert
Node* insertK(Node* head, int x){
    Node* newNode = new Node(x);
    if(head==NULL)
    return newNode;

    Node* temp=head;
    while(temp->next->data<x){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;

    return head;
}

int main(){

    Node* head=NULL;
    head=insertAtEnd(head,10);
    head=insertAtEnd(head,20);
    head=insertAtEnd(head,30);
    head=insertAtEnd(head,40);

    printList(head);
    cout<<endl;
    int k=25;
    head=insertK(head,k);
    printList(head);

return 0;
}