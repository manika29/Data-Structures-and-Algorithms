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

Node* reverse(Node* head, int k){
    Node* curr=head;
    bool isFirstPass=true; 
    Node* prevFirst=NULL;
    while(curr!=NULL){
        Node* first=curr;
        Node* prev=NULL, *next=NULL;
        int count=0;
        while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    if(isFirstPass){
        head=prev;
        isFirstPass=false;
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

head=reverse(head,3);
printList(head);
return 0;
}