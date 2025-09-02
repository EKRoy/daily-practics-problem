#include<bits/stdc++.h>
using namespace std;
#define ll            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define en             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define vrev(v)        reverse(v.begin(),v.end());
#define vsort(v)       sort(v.begin(),v.end());
#define rsort(v)       sort(v.rbegin(),v.rend());
#define vlowerB(v,x)   lower_bound(v.begin(),v.end(),x)
#define vupperB(v,x)   upper_bound(v.begin(),v.end(),x)
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<ll>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
void solve(){
   ll n,k; cin>>n>>k;
   string s; cin>>s;
   vi v;
  for(int i=0;i<n;i++){
    if(s[i]=='0') v.pb(i);
  }
  vi a(n);
  rep(i,0,n-1) cin>>a[i];
  ll sum=0,mx=0;
  for(int i=0;i<n;i++){
    if(s[i]=='0'){
        a[i]=-1e18;
        sum=0;
    }
    else{
        sum+=a[i];
        mx=max(mx,sum);
        sum=max(sum,0ll);
    }
  }
  if(mx>k){
    pn
    return;
  }
  else if(mx==k){
    py
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<en;
    return;
  }
  if(v.size()==0){
    pn
    return;
  }
  ll prefix=0;
  for(int i=0;i<v[0];i++){
    prefix+=a[i];
    prefix=max(prefix,0ll);
  }
  ll suffix=0;
  for(int i=n-1;i>v[0];i--){
    suffix+=a[i];
    suffix=max(suffix,0ll);
  }
  a[v[0]]=k-(prefix+suffix);
  py
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}