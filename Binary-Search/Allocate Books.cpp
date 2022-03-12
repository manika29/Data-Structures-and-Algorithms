bool isPossible(vector<int> arr,int n,int m, int mid){
    int studentCount = 1;
    int pagesSum=0;
    
    for(int i=0; i<n; i++){
        if(pagesSum+arr[i]<=mid){
            pagesSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid)
                return false;
            else
                pagesSum=arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}