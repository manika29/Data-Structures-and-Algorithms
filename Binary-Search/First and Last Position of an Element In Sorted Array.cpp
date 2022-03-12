int firstOcc(vector<int>&arr,int n,int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    
    while(s<=e){
        int mid=(s+(e-s)/2);
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<k)
            s=mid+1;
        else
            e=mid-1;
    }
    return ans;
}

int lastOcc(vector<int>&arr,int n,int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    
    while(s<=e){
        int mid=(s+(e-s)/2);
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<k)
            s=mid+1;
        else
            e=mid-1;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);
    return p;
}