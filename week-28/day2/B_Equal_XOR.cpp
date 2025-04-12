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
    vi a(2*n);
    rep(i,0,2*n-1) cin>>a[i];
    vi b,c;
    map<int,int>mp;
    map<int,int>mp2;
    int cnt=0;
    for(int i=0;i<n;i++){
        b.pb(a[i]);
        mp[a[i]]++;
        if(mp[a[i]]==2) cnt++;
    }
    for(int i=n;i<2*n;i++){
        c.pb(a[i]);
        mp2[a[i]]++;
    }
    int s=0;
    vi ans1,ans2;
        for(auto it:mp){
            if(it.S==2){
                // cout<<it.F<<" "<<it.F<<" ";
                ans1.pb(it.F);
                ans1.pb(it.F);
                s++;
                if(s==k) break;
            }
        }
        s=0;
        for(auto it:mp2){
            if(it.S==2){
                // cout<<it.F<<" "<<it.F<<" ";
                ans2.pb(it.F);
                ans2.pb(it.F);
                s++;
                if(s==k) break;
            }
        } 
    vi d;
    s*=2;
    for(int i=1;i<=n;i++){
        if(s==2*k) break;
        if(mp[i]!=2 && mp2[i]!=2){
            d.pb(i);
            s++;
        }
    }
    for(int i:ans1) cout<<i<<" ";
    for(int i:d) cout<<i<<" ";
    cout<<endl;
    for(int i:ans2) cout<<i<<" ";
    for(int i:d) cout<<i<<" ";
    cout<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}