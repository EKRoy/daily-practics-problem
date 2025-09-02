#include<bits/stdc++.h>
using namespace std;
int main(){
     int n; cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++) cin>>v[i];
   for(int i=0;i<(1<<n);i++){
    for(int k=0;k<n;k++){
        if((i>>k)&1) cout<<v[k]<<" " ;
        else cout<<-v[k]<<" ";
    }
    cout<<'\n';
   }
   return 0;
}