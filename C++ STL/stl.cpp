#include <bits/stdc++.h>
using namespace std;
int main(){

    //1 - Array
    array<int,4>a={1,2,3,4};
    int size=a.size();

    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<a.at(2)<<endl;
    cout<<a.empty()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    //2 - Vector
    vector<int>v;
    vector<int>(5,1);

    //copy v to v2;
    vector<int>v2(v);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // v.pop_back();
    cout<<v.capacity()<<" ";
    for(auto i:v){
        cout<<i<<"";
    }

    //3 - Dequeue : Doubly ended queue
    deque<int>d;
    d.push_back(1);
    d.push_front(2); //output - 21

    d.pop_back(); //1 is removed
    d.pop_front(); //2 is removed

    d.erase(d.begin(),d.begin()+1); //remove 1

    //4 - List : Doubly Linked List
    list<int>l;

    l.push_back(1);
    l.push_front(2); //output - 21
    l.erase(l.begin());

    //5 - Stack
    stack<string>s;
    s.push("manika");
    s.push("sharma");

    s.top();
    s.pop();

    //6 - Queue
    queue<string>q;
    q.push("manika");
    q.push("sharma");

    q.front();
    q.pop();
    q.size();
    q.empty();

    //7 - Priority Queue
    //By default - max heap
    priority_queue<int>maxq;

    //min heap
    priority_queue<int,vector<int>,greater<int>>minq;

    maxq.push(1);
    maxq.push(2);
    maxq.push(3);
    maxq.push(4);

    int n=maxq.size();
  for(int i=0; i<n; i++){
      cout<<maxq.top()<<" ";
      maxq.pop();
  }

   int n=minq.size();
  for(int i=0; i<n; i++){
      cout<<minq.top()<<" ";
      minq.pop();
  }

//ALGORITHMS

vector<int>v;
v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);

cout<<binary_search(v.begin(),v.end(),6); //true
cout<<lower_bound(v.begin(),v.end(),6)-v.begin(); //2
cout<<lower_bound(v.begin(),v.end(),6)-v.begin(); //3






return 0;
}