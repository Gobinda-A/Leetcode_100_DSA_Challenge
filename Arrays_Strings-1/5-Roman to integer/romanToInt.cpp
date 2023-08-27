class Solution {
public:
    int value(char ch){
        int val;
        if(ch=='I') val=1;
           else if(ch=='V') val=5;
           else if(ch=='X') val=10;
           else if(ch=='L') val=50;
           else if(ch=='C') val=100;
           else if(ch=='D') val=500;
           else if(ch=='M') val=1000;
           return val;
    }
    int romanToInt(string s) {
       int sum=0;
       int first=0,second=1;
       for(int i=0;i<s.length();i++){
           int a=value(s[first]);
           int b=value(s[second]);
           if(b>a){
               sum+=b-a;
               first+=2; second+=2;
               i+=1;
           }
           else{
               sum+=a;
               first++; second++;
           }
       } 
       return sum;
    }
};
