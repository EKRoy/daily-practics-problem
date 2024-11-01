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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    vi a(n);
    a[0]=k*b;
    s-=k*b;
    if(s<0){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
       ll now=min(k-1,s);
        a[i]+=now;
        s-=now;
    }
    if(s>0) cout<<-1<<endl;
    else{
        rep(i,0,n-1) cout<<a[i]<<" ";
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