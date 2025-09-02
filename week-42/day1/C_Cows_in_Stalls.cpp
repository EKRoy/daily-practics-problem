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
ll lcm(ll a,ll b)
{
    return ((a/(__gcd(a,b)))*b);
}
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second<p2.second;
}
void solve(){
   int n,k; cin>>n>>k;
   vi a(n);
   rep(i,0,n-1) cin>>a[i];
   auto ok=[&](int mid){
    int count=1;
    int last=a[0];
    for(int i=1;i<n;i++){
        if(a[i]-last>=mid){
            count++;
            last=a[i];
            if(count==k) return true;
        }
    }
    return false;
   };
   int l=1,r=a[n-1]-a[0];
   int ans=0;
   while(l<=r){
    int mid=l+(r-l)/2;
    if(ok(mid)){
        ans=mid;
        l=mid+1;
    }
    else r=mid-1;
   }
   cout<<ans<<nl;
}
int32_t main()
{
   ft
 solve();
   
    return 0;
}