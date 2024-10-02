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
    ll n,k; cin>>n>>k;
    if(k%2){
        pn
        return;
    }
    ll ar[n+1];
    rep(i,1,n) ar[i]=i;
    rep(i,1,n/2){
        ll y=n-i+1;
        ll x=y-i;
        if((2*x)<=k){
            ar[i]=y;
            ar[y]=i;
            k-=(2*x);
        }
        else if(2*x-2 ==k){
            ar[i]=y-1;
            ar[y-1]=i;
            k=0;
            break;
        }
        else{
            ar[i]=i;
            ar[y]=y;
        }
    }
    if(k!=0){
        pn
    }
    else{
        py
        rep(i,1,n) cout<<ar[i]<<" ";
        cout<<endl;
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}