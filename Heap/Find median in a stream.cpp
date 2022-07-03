// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    priority_queue<int>maxHeap;
    priority_queue<int,vector<int>, greater<int>>minHeap;
    double med=0.0;
    
    int signum(int a,int b){
        if(a==b)
        return 0;
        
        if(a>b)
        return 1;
        
        else
        return -1;
    }
    //Function to insert heap.
    void insertHeap(int &x)
    {
        switch(signum(maxHeap.size(),minHeap.size()))
        {
            case 0:
        if(x>med){
            minHeap.push(x);
            med=(double)minHeap.top();
        }
        else{
            maxHeap.push(x);
            med=(double)maxHeap.top();
        }
        break;
        
        case 1:
        if(x>med){
            minHeap.push(x);
            med = (double)( minHeap.top() + maxHeap.top() ) /2;
        }
        else{
            minHeap.push(maxHeap.top());
            maxHeap.pop();
            maxHeap.push(x);
            med = (double)( minHeap.top() + maxHeap.top() ) /2;
        }
        break;
        
        case -1 :    // size    MinHeap size   > Maxheap Size  
        
           if(x > med){
               maxHeap.push(minHeap.top());
               minHeap.pop();
               
               minHeap.push(x);
               med = (double)( minHeap.top() + maxHeap.top() ) /2;
           }
       
       else{
           
           maxHeap.push(x);
           med = (double)( minHeap.top() + maxHeap.top() ) /2;
       }
       break;
        }
        
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        return med;
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends