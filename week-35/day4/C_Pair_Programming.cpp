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
   int k,n,m; cin>>k>>n>>m;
   vi a(n),b(m);
   rep(i,0,n-1) cin>>a[i];
   rep(i,0,m-1) cin>>b[i];
   vi ans;
   int l=0,r=0;
   while(l<n || r<m){
    if(l<n && a[l]==0){
        k++;
        l++;
        ans.pb(0);
    }
    else if(r<m && b[r]==0){
        k++,r++;
        ans.pb(0);
    }
    else  if(l<n && a[l]<=k) {
        ans.pb(a[l]);
        l++;
    }
    else if(r<m && b[r]<=k) ans.pb(b[r]),r++;
    else{
        cout<<-1<<endl;
        return;
    }
   }
   for(int i:ans) cout<<i<<" ";
   cout<<endl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}