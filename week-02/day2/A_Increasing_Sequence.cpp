#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve(){
    int n; cin>>n;
    vi a(n),b;
    int val,cnt=1;
    for(int i=0;i<n;i++) cin>>a[i];
    if(a[0]==1){
        val=2;
    }
    else{
        val=1;
    }
    b.pb(val);
    for(int i=1;i<n;i++){
        val++;
        if(a[i]==val){
            val++;
            b.pb(val);
        }
        else{
            b.pb(val);
        }
    }
    cout<<b[n-1]<<nl;
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--){
    solve();
   } 
    return 0;
}