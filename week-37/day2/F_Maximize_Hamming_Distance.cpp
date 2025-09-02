#include<bits/stdc++.h>
using namespace std;
#define ll            long long int
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define en             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define sz(x)          ((ll)(x).size())
#define vrev(v)        reverse(v.begin(),v.end());
#define vsort(v)       sort(v.begin(),v.end());
#define rsort(v)       sort(v.rbegin(),v.rend());
#define vlowerB(v,x)   lower_bound(v.begin(),v.end(),x)
#define vupperB(v,x)   upper_bound(v.begin(),v.end(),x)
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<int>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
void solve(){
   int n,m; cin>>n>>m;
   map<int,int>mp;
   ll ans=0;
   vi cnt(n+1);
   for(int j=0;j<m;j++){
    string s; cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='?') {
            cnt[i]++;
        }
        else{
            mp[i]=mp[i]+(s[i]-'0');
        }
       }
    }

for(int i=0;i<n;i++){
 if(mp[i]>0 ){
    if(mp[i]==m) continue;
    int s=0;
    if(cnt[i]>1){
        s=cnt[i];
    }
    int g=mp[i],h=m-mp[i];
     ans+=g*h;
 }
}
cout<<ans<<endl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}