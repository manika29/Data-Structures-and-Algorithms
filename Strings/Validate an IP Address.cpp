class Solution {
    public:

int isValid(string s) {
            if(any_of(s.begin(),s.end(),::isalpha))return 0;
            vector<string>v;
            string str="";
            for(int i = 0 ; i  < s.size() ; i++){
                if(s[i]=='.'){
                    if(str!=""){
                    v.push_back(str);
                    }
                    str = "";
                    continue;
                }
                else{
                    str += s[i];
                }
            }
            v.push_back(str);
            
            if(v.size()!=4)return 0;
            for(int i = 0 ; i < v.size() ; i++){
                if(stoi(v[i])==0 && v[i].size() !=1)return 0;
                if(stoi(v[i])!=0 && v[i][0]=='0')return 0;
                if(stoi(v[i]) < 0 or stoi(v[i])>255)return 0;
            }
            return true;
        }
};