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

Node* recRev(Node* head, int k){
    Node* curr=head;
    int count=0;
    Node* prev=NULL; Node* next=NULL;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    if(next!=NULL){
        Node* temp=recRev(next,3);
        head->next=temp;
    }
    return prev;
}

Node* iterRev(Node* head, int k){
    Node* curr=head;
    Node* prevFirst=NULL;    
    bool isFirst=true;

    while(curr!=NULL){
        int count=0;
        Node* first=curr;
        Node* next=NULL;
        Node* prev=NULL;

        while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
        }

        if(isFirst){
            head=prev;
            isFirst=false;
        }
        else{
            prevFirst->next=prev;
        }

        prevFirst=first;
    }

    return head;
}


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

int main(){

Node* head=NULL;

head=insertAtEnd(head,10);
head=insertAtEnd(head,20);
head=insertAtEnd(head,30);
head=insertAtEnd(head,40);
head=insertAtEnd(head,50);

// head=recRev(head,3);
// printList(head);

head=iterRev(head,3);
printList(head);
return 0;
}