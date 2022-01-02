class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int s1=str1.size();
        int s2=str2.size();
        
        int gcd=__gcd(s1,s2);
        string ans="";
        
        if(str1+str2 == str2+str1){
            ans=str1.substr(0,gcd);
            return ans;
        }
        else{
            return "";
        }
        
    }
};