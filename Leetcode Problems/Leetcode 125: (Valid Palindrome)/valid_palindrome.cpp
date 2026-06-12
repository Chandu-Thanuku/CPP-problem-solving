class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(char c:s){
            if(isalnum(c)){
                
                ans+=tolower(c);
            }
        }
        int j=ans.length()-1;
        bool a=true;
        for(int i=0;i<=j;i++){
             if(ans[i]!=ans[j]){
                a=false;
                 break;
             }
             j--;
        }
        return a;

    }
};
