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
   int n; cin>>n;
   vi v(n);
   rep(i,0,n-1) cin>>v[i];
   vector<pair<int,int>>p;
   int mid=n/2;
   int r=n;
   for(int i=mid;i<n;i++){
    if(v[i]==0){
        p.pb({mid+1,n});
        r -= (n - mid - 1);
        break;
    }
   }
   for(int i=0;i<mid;i++){
    if(v[i]==0){
        p.pb({1,mid});
        r -= ( mid - 1);
        break;
    }
   }
   p.pb({1,r});
   cout<<p.size()<<endl;
   for(auto it:p){
    cout<<it.F<<" "<<it.S<<endl;
   }
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}