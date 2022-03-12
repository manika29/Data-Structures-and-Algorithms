int getPivot(vector<int>& arr,int n){
    int s=0; int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0])
        s=mid+1;
        else
        e=mid;
    }

    return s;
}
int binarySearch(vector<int>& arr,int start,int end,int key){
  
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        return mid;

        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }


    }
    return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1])
    	return binarySearch(arr,pivot,n-1,k);
    else
        return binarySearch(arr,0,pivot-1,k);
    
    }

