int findDuplicate(vector<int> &arr) 
{
    // Approach 1
    int n=arr.size();
    int sum=((n-1)*n)/2;
    
    int arrsum=0;
    for(int i=0; i<n; i++){
        arrsum+=arr[i];
    }
    return arrsum-sum;
    
    //Aprroach 2
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans=ans^arr[i];
    }
    for(int i=1; i<n; i++){
        ans=ans^i;
    }
    return ans;
	
}
