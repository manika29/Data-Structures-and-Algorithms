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

//Reverse
Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }

    return prev;
}

int main(){

    Node* head=NULL;
    head=insertAtEnd(head,10);
    head=insertAtEnd(head,20);
    head=insertAtEnd(head,30);
    head=insertAtEnd(head,40);

    printList(head);
    cout<<endl;
    head=reverse(head);
    printList(head);

return 0;
}