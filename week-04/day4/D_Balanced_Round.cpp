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
    int n,k; cin>>n>>k;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    sort(a.begin(),a.end());
    int cnt=1,ans=1;
    rep(i,1,n-1){
        if((a[i]-a[i-1])<=k){
            cnt++;
        }
        else{
            cnt=1;
        }
        ans=max(ans,cnt);
    }
    
    cout<<n-ans<<nl;
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