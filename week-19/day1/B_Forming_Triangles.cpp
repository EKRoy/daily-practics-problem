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
    vi a(n);
    map<int,int>mp;
    for(auto &x:a) {
        cin>>x;
        mp[x]++;
    }
    vsort(a)
    ll sum=0;
    for(auto [x,y]:mp){
      
        sum+=(1ll*y*(y-1)*(y-2))/6;
        int cnt=lower_bound(a.begin(),a.end(),x)-a.begin();
        sum+=((1ll*y*(y-1))/2)*(cnt);
    }
    cout<<sum<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}