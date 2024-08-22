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
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int cnt=1,ans=1;
    bool ok=false;
    rep(i,1,n-1){
        if(s[i]==s[i-1]) cnt++;
        else{
            cnt=1;
        }
        ans=max(cnt,ans);
    }
    cout<<ans+1<<endl;
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