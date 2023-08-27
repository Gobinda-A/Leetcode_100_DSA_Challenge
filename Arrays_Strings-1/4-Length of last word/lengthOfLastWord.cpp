class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length(),ct=0;
        bool flag=false;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ' && flag) break;
            if(s[i]!=' '){ct++; flag=true;}
        }
        return ct;
    }
};
