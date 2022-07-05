#include <bits/stdc++.h>
using namespace std;

class Stack{
    public: 
    int n,k;
    int *arr;
    int *next;
    int *top;
    int free;

    Stack(int size,int num){
        n=num;
        k=size;
        free=0;
        arr=new int[n];
        next=new int[n];
        top=new int[k];

        for(int i=0; i<k; i++){
            top[i]=-1;
        }

        for (int i=0; i<n-1; i++)
        next[i] = i+1;
        
        next[n-1] = -1; 
    }

    bool isFull(){
        return free==-1;
    }

    bool isEmpty(int sn){
        return top[sn]==-1;
    }

    void push(int item, int sn){
        int i=free;
        free=next[i];
        next[i]=top[sn];
        top[sn]=i;
        arr[i]=item;
    }

    int pop(int sn){
        int i=top[sn];
        top[sn]=next[i];
        next[i]=free;
        free=i;
        return arr[i];
    }

};

int main()
{
    return 0;
}