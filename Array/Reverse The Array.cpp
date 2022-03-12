// Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int n=arr.size();
    int start=0; int end=n-1;
    while(start<=end){
        if(start<=m){
            start++;
            continue;
        }
        swap(arr[start++],arr[end--]);
    }
}