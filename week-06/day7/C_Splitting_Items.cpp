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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n,k; cin>>n>>k;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    rsort(a)
    int ans=0;
    for(int i=0;i<n-1;i+=2){
        if(a[i]-a[i+1]<=k){
            ans+=0;
            k=a[i]-a[i+1];
        }
        else {
            ans+=a[i]-a[i+1]-k;
            k=0;
        }
    }
    if(n&1) ans+=a[n-1];
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}