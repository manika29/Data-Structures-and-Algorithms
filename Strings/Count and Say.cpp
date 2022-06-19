class Solution {
public:
    
    string solve(string s,int n){
            if(n==1)                                              // IF n is 1 , store 1 in our answer string
                {
                    s.push_back('1');
                    return s;
                }
            s=solve(s,n-1);                                      // Calling this sayfuntion recursively upto N times

            int i,j,count;
            string ans;
            for(i=0;i<s.length();i=j)                             // This loop will iterate through all characters of string
            {   
                count=0;
                for(j=i+1;j<s.length();j++)                       // This loop will count no. of times the char's are present in the string
                {   
                    if(s[i]==s[j])
                        count++;
                    else
                        break;                
                }
                string temp=to_string(count+1);                   // Storing the count value in our answer string and returning recursively
                ans=ans+temp;
                ans.push_back(s[i]);               
             }        
            return ans;
        }

        string countAndSay(int n) {
            string s;
            return solve(s,n);
    }
};