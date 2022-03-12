class Solution {
public:
    bool checkEqual(int count1[], int count2[]){
        for(int i=0; i<26; i++){
            if(count1[i]!=count2[i])
                return 0; 
        }
        
        return 1;
    }
    
    bool checkInclusion(string s1, string s2) {
        
        //store count of characters in s1 string
        int count1[26]={};
        for(int i=0; i<s1.length(); i++){
            count1[s1[i]-'a']++;
        }
        
        int i=0;
        int windowSize=s1.length();
        int count2[26]={};
        
        //traverse s2 in window of size s1.length()
        //first window
        
        while(i<s2.length() && i<windowSize){  
            count2[s2[i]-'a']++;
            i++;
        }
        
        if(checkEqual(count1,count2))
            return 1;
        
        //rest of the windows
        while(i<s2.length()){
            count2[s2[i-windowSize]-'a']--;
            count2[s2[i]-'a']++;
            i++;
            if(checkEqual(count1,count2))
                return 1;
        }
        return 0;
    }
};