class Solution {
public:
    int romanToInt(string s) {
        map<char,int>value;
        value['I']=1;
        value['V']=50;
        value['X']=10;
        value['L']=50;
        value['C']=100;
        value['D']=500;
        value['M']=1000;
   
              int total=0;
              for(int i=0;i<s.length();i++){
                if(i+1<s.length() && value[s[i]]<value[s[i+1]]){
                    total-=value[s[i]];
                }else{
                    total+=value[s[i]];
                }
              }
              return total;
    }
};
