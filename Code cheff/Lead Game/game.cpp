#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int Si,Ti,sum1=0,sum2=0,lead,maxlead=0,Winner;
for(int i=0;i<n;i++){
    cin>>Si>>Ti;
    sum1+=Si;
   sum2+=Ti;    
    lead=(sum1>sum2)?(sum1-sum2):(sum2-sum1);
    int Cwinner=(sum1>sum2)?1:2;
    if(lead>maxlead){
        maxlead=lead;
        Winner=Cwinner;
    }
  
}
cout<<Winner<<" "<<maxlead;

}
