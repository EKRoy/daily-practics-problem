#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<long long>
void solve(){
    int n; cin>>n;
    vi a(n),b(n);
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,n-1) cin>>b[i];
    map<int,int>cntA,cntB;
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt++;
        if(i==n-1 || a[i+1]!=a[i]){
            if(cntA.find(a[i])==cntA.end()){
                cntA[a[i]]=cnt;
            }
            else{
                cntA[a[i]]=max(cnt,cntA[a[i]]);
            }
            cnt=0;
        }
    }
    for(int i=0;i<n;i++){
        cnt++;
        if(i==n-1 || b[i+1]!=b[i]){
            if(cntB.find(b[i])==cntB.end()){
                cntB[b[i]]=cnt;
            }
            else{
                cntB[b[i]]=max(cnt,cntB[b[i]]);
            }
            cnt=0;
        }
    }
    int ans=0;
    for(auto [x,y]:cntA){
        ans=max(ans,cntA[x]+cntB[x]);
    }
    for(auto [x,y]:cntB){
        ans=max(ans,cntA[x]+cntB[x]);
    }
    cout<<ans<<nl;
}
   
int32_t main()
{
   ft;
   int tc; cin>>tc;
   while(tc--){
    solve();
   } 
    return 0;
}