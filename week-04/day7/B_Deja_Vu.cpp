#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define endl "\n"
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<long long>
int32_t main()
{
   ft;
   int tc; cin>>tc;
   while(tc--){
    int n,q; cin>>n>>q;
    vi a(n),x;
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,q-1){
        int val;
        cin>>val;
        if(x.empty() || x.back()>val){
            x.pb(val);
        }
    }
    for(int val:x){
        for(int i=0;i<n;i++){
            if(a[i]%(1<<val)==0){
                a[i]+=1<<(val-1);
            }
        }
    }
    for(auto &i:a) cout<<i<<" ";
    cout<<endl;
   } 
    return 0;
}