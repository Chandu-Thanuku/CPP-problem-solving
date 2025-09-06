#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int Si,Ti,lead,maxlead=0,Winner;
for(int i=0;i<n;i++){
    cin>>Si>>Ti;
    lead=(Si>Ti)?(Si-Ti):(Ti-Si);
    int Cwinner=(Si>Ti)?1:2;
    if(lead>maxlead){
        maxlead=lead;
        Winner=Cwinner;
    }
  
}
cout<<Winner<<" "<<maxlead;

}
