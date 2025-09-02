#include<bits/stdc++.h>
using namespace std;
#define ll            long long int
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define nl             "\n"
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
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second<p2.second;
}
void solve(){
   int n,m,k; cin>>n>>m>>k;
   map<int,int>mp;
   map<int,int>cnt;
   vi a(n),b(m);
   rep(i,0,n-1) cin>>a[i];
   rep(i,0,m-1) {
    cin>>b[i];
    mp[b[i]]++;
   }
   int l=0,r=0;
   int ans=0,cnt1=0;
   while(r<n){
        cnt[a[r]]++;
        if(mp[a[r]]>=1 && mp[a[r]]>=cnt[a[r]])
        cnt1++;
    if(r-l+1==m){
        if(cnt1>=k) ans++;
        cnt[a[l]]--;
        if(mp[a[l]]>=1 && mp[a[l]]>cnt[a[l]]){
            cnt1--;
        }
        l++;
    }
    r++;
   }
   cout<<ans<<nl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}