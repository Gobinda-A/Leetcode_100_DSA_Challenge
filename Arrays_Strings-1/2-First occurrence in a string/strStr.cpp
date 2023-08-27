class Solution {
public:
    int strStr(string h, string n) {
        int a=h.length();
        int b=n.length();
        int j=0;
        for(int i=0;i<a;i++){
            if(h[i]==n[j]) j++;
            else{
                i=i-j;
                j=0;
            }
            if(j==b) return i-j+1;
        }
        return -1;
    }
};
