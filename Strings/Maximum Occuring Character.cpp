class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int freq[26]={};
        for(int i=0; i<str.size(); i++){
            freq[str[i]-'a']++;
        }
        
        char ans='a';
        int maxFreq=-1;
        
        for(int i=0; i<26; i++){
            if(maxFreq<freq[i]){
                maxFreq=freq[i];
                ans='a'+i;
            }
           
        }
        
        return ans;
        
    }

};