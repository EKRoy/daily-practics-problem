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
    int n;
    char c;
     cin>>n>>c;
    string s; cin>>s;
    int cnt=0,ans=0;
    s+=s;
    if(c=='g'){
        cout<<0<<endl;
        return;
    }
    rep(i,0,2*n-1){
        if(s[i]==c){
            cnt++;
        }
        else if(s[i]!=c && s[i]!='g'){
            if(cnt>0) cnt++;
        }
        else{
            ans=max(ans,cnt);
            cnt=0;
        }
    }
    cout<<ans<<endl;
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