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
    vi b;
    int x; 
    int cnt=0;
    while(cin>>x){
        if(x==-1) cnt++;
        else
        b.pb(x);
    }
    // if(x==-1) cnt++;
    // else
    // b.pb(x);
    // for(int i:b) cout<<i<<" ";
    cout<<endl;
    int n=b.size();
    map<int,int>mp;
    cnt/=2;
    for(int i=n-1;i>=cnt-1;i--){
        // cout<<b[i]<<" ";
        mp[b[i]]++;
    }
    int ans=0,final=0;
    for(auto [x,y]:mp){
        if(y>ans){
            ans=y;
            final =x;
        }
    }
    cout<<final;
}
int32_t main()
{
   ft
   solve(); 
    return 0;
}