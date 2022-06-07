#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }


        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }

void levelOrderTraversal(node* root){
    // queue<node*>q;
    // q.push(root);

    // while(!q.empty()){
    //     node* temp=q.front();
    //     q.pop();
    //     cout<<temp->data<<" ";
    //     if(temp->left)
    //     q.push(temp->left);

    //     if(temp->right)
    //     q.push(temp->right);
    // }

    //Level Wise
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
           
        cout<<temp->data<<" ";
        if(temp->left)
        q.push(temp->left);

        if(temp->right)
        q.push(temp->right);
        
        }
        
    }
}

void reverseLevelOrderTraversal(node* root){
    stack<node*>s;
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        s.push(temp);

        if(temp->right)
        q.push(temp->right);

        if(temp->left)
        q.push(temp->left);
    }

    while(!s.empty()){
        node* curr=s.top();
        s.pop();
        cout<<curr->data;
    }
}

void inorderTraversal(node* root){
    if(root==NULL)
    return;

    inorderTraversal(root->left);
    cout<<root->data;
    inorderTraversal(root->right);
}

void inorderIterative(node* root){
    stack<node*>s;
    s.push(root);

    node* curr=root;
    while(!s.empty() || curr!=NULL){
        if(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }

        else{
            curr=s.top();
            cout<<curr->data;
            curr=curr->right;

        }
    }
}

void preorderTraversal(node* root){
    if(root==NULL)
    return;

    cout<<root->data;
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void preorderIterative(node* root){
    stack<node*>s;
    s.push(root);

    while(!s.empty()){
        node* curr=s.top();
        s.pop();
        cout<<curr->data;

        if(curr->right)
        s.push(curr->right);

        if(curr->left)
        s.push(curr->left);
    }
}

void postorderTraversal(node* root){
    if(root==NULL)
    return;

    postorderTraversal(root->right);
    cout<<root->data;

}

// void postorderIterative(node* root){
//     stack<node*>s;
//     stack<int>out;
//     s.push(root);

//     while(!s.empty()){
//         node* curr=s.top();
//         s.pop();
//         out.push(curr->data);

//         if(curr->left)
//         s.push(curr->left);

//         if(curr->right)
//         s.push(curr->right);
//     }

//     while(!out.empty()){
//         cout<<out.top()<<" ";
//         out.pop();
//     }
// }

void postorderIterative(node* root){
    stack<node*>s;
    node* curr=root;
    node* prev=NULL;

    while(curr!=NULL || !s.empty()){
        if(curr!=NULL){
            s.push(curr);
        curr=curr->left;
        }

        else{
            curr=s.top();
            if(curr->right==NULL || curr->right==prev){
                cout<<curr->data;
                s.pop();
                prev=curr;
                curr=NULL;
            }
            curr=curr->right;
        }
        

    }
}



node* buildTree(node* root){
    cout<<"Enter data"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1)
    return NULL;

    cout<<"Enter node for left"<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter node for right"<<endl;
    root->right=buildTree(root->right);

    return root;
    
}

int main()
{
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    node* root=NULL;
    root=buildTree(root);
    cout<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    reverseLevelOrderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;
    inorderIterative(root);
    cout<<endl;
    preorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);

    return 0;
}