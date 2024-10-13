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
#define vi             vector<ll>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
void solve(){
    int n,k; cin>>n>>k;
    vi a;
    rep(i,0,n-1){
        ll x; cin>>x;
        a.pb(x);
    }
    if(k>=3){
        cout<<0<<endl;
        return;
    }
    vsort(a)
    ll mn=a[0];
    rep(i,0,n-2){
        mn=min(mn,(a[i+1]-a[i]));
       }
    if(k==1){
     cout<<mn<<endl;
     return;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            ll val=a[i]-a[j];
            auto it=lower_bound(a.begin(),a.end(),val)-a.begin();
            if(it<n){
                mn=min(mn,a[it]-val);
            }
            if(it>0){
                mn=min(mn,val-a[it-1]);
            }
        }
    }
    cout<<mn<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}