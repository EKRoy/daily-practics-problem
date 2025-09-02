#include<bits/stdc++.h>
using namespace std;
#define mod 998244353
void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    long long int prod=v[0];
    for(int i=1;i<n;i++){
        prod=(prod*(v[i]-i)+mod)%mod;
    }
    cout<<prod<<'\n';
}
int main(){
     int t; cin>>t;
     while(t--) solve();
    return 0;
}