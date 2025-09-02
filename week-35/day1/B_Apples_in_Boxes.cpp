#include<bits/stdc++.h>
using namespace std;
#define ll            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define endl             "\n"
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
#define vi             vector<int>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
void solve(){
   int n,k; cin>>n>>k;
   vi a(n);
  rep(i,0,n-1) cin>>a[i];
  vsort(a)
  if(a[n-1]-a[0]-1>k) {
    cout<<"Jerry\n";
    return;
  }
  if(a[0]>k){
    if(k%2==1){
        for(int i=1;i<n;i++){
            if(a[0]%2 == a[i]%2){
                cout<<"Tom\n";
                return;
            }
        }
        cout<<"Jerry\n";
        return;
      }
      else{
        for(int i=1;i<n;i++){
            if(a[0]%2 != a[i]%2){
                cout<<"Jerry\n";
                return;
            }
        }
        cout<<"Tom\n";
        return;
      }
  }
  else{
    ll sum=0;
    for(int i:a) sum+=i;
    if(sum%2==1) cout<<"Tom\n";
    else cout<<"Jerry\n";
  }
 
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}