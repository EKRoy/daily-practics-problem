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
bool possible(ll x,ll y)
{
    if(x==y)
        return true;
    vector<ll> a;
    ll t=x;
    while((t-x)<=20)
    {
        if(t%10==0)
            break;
        t+=(t%10);
        if(t==y)
            return true;
        a.push_back(t);
    }
    for(auto i:a)
        if(y>i && (y-i)%20==0)
            return true;
    return false;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
    {
        cin >> v[i];
        if(v[i]&1)
            v[i]+=(v[i]%10);
    }
    bool ok=true;
    ll maxi=*max_element(v.begin(),v.end());
 
    for(ll i=0; i<n; i++)
    {
        if(!possible(v[i],maxi))
        {
            cout << "No" << '\n';
            return;
        }
    }
    cout << "Yes" << '\n';
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}