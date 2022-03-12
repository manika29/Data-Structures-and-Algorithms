class Solution {
public:
    bool isPalindrome(string s) {
        
        int start=0;
        int end=s.length()-1;
        
        if(s.length()==1)
            return true;
        
        while(start<=end){
            if(isalnum(s[start]) ==0)
                start++;
            else if(isalnum(s[end])==0)
                end--;
            
            else if(tolower(s[start])!=tolower(s[end]))
                return false;
            
            else{
                start++;
                end--;
            }
        }
        
        return true;
        
    }
};