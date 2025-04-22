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
   int x=*min_element(a.begin(),a.end());
   if(x>k){
    pn
    return;
   }
   vi j=a;
   if(n==3 && j[1]<=k){
    py
    return;
   }
   vi s1;
   int idx=-1;
   for(int i=0;i<n-2;i++){
    s1.pb(a[i]);
    int m=s1.size();
    vsort(s1)
    if(s1[(m-1)/2]<=k){
        idx=i;
        if(m%2==1 && a[i+1]>k) idx++;
        break;
    }
   }
   s1.clear();
   if(idx!=-1){
    for(int i=idx+1;i<n-1;i++){
        s1.pb(a[i]);
       int d=s1.size();
       vsort(s1)
       if(s1[(d-1)/2]<=k){
        idx=i;
        py
        return;
      }
    }
    s1.clear();
    for(int i=n-1;i>idx;i--){
        s1.pb(a[i]);
        int e=s1.size();
        vsort(s1)
        if(s1[(e-1)/2]<=k){
         idx=i;
         py
         return;
       }
    }
   }
   pn
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}