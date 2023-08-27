class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string res="";
        int n=s.size();
        sort(s.begin(),s.end());
        string first=s[0];
        string last=s[n-1];
        for(int i=0;i<first.size();i++){
            if(first[i]==last[i])
            res.push_back(first[i]);
            else break;
        }
        return res;
    }
};
