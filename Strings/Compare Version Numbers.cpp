class Solution {
public:
      int compareVersion(string version1, string version2) {
        int i=0,j=0;
        while(i<version1.size() && j<version2.size()){
            string v1="",v2="";
            while(version1[i]!='.' && i<version1.size()){
                v1+=version1[i++];
            }
            while(version2[j]!='.' && j<version2.size()){
                v2+=version2[j++];
            }
            if(version1[i]=='.'){i++;}
            if(version2[j]=='.'){j++;}
            int p1=stoi(v1);
            int p2=stoi(v2);
            if(p1<p2){return -1;}
            else if(p1>p2){return 1;}
        }
        while(i<version1.size()){
            string v1="";
            while(version1[i]!='.' && i<version1.size()){
                v1+=version1[i++];
            }
            if(version1[i]=='.'){i++;}
            int p1=stoi(v1);
            if(p1>0){return 1;}
        }
        while(j<version2.size()){
            string v2="";
            while(version2[j]!='.' && j<version2.size()){
                v2+=version2[j++];
            }
            if(version2[j]=='.'){j++;}
            int p1=stoi(v2);
            if(p1>0){return -1;}
        }
        return 0;
    }
};