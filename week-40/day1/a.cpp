#include<bits/stdc++.h>
#define ll long long int
const int MOD=1e9+7;
using namespace std;
ll binary(ll base,ll power){
    ll result=1;
    while(power){
        if(power&1) {
            result=(result*base*1ll)%MOD;
        }
            base=(base*base*1ll)%MOD;
            power/=2;
    }
    return result;
}
int main(){
    ll a,b; cin>>a>>b;
   cout<<binary(a,b)<<endl;
   return 0;
}