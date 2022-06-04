// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
bool compare(val p1,val p2){
    return p1.first<p2.first;
}
int maxChainLen(struct val p[],int n)
{
//Your code here
sort(p,p+n,compare);
int lis[n];
       lis[0]=1;
       for(int i=1; i<n; i++){
           lis[i]=1;
           for(int j=0; j<i; j++){
               if(p[j].second<p[i].first){
                   lis[i]=max(lis[j]+1,lis[i]);
               }
           }
       }
       int res=1;
       for(int i=0; i<n; i++){
           res=max(res,lis[i]);
       }

        return res;
}