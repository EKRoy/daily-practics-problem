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
    ll n,m; cin>>n>>m;
    string s; cin>>s;
    ll a[n][m];
    rep(i,0,n-1){
        rep(j,0,m-1){
            cin>>a[i][j];
        }
    }
    ll l=0,r=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='D'){
            ll sum=0;
            for(ll j=0;j<m;j++){
                sum+=a[l][j];
            }
            a[l][r]=0-sum;
            l++;
        }
        else if(s[i]=='R'){
            ll sum2=0;
            for(ll j=0;j<n;j++){
                sum2+=a[j][r];
            }
            a[l][r]=0-sum2;
            r++;
        }
    }
    ll sum3=0;
    for(ll i=0;i<m;i++){
        sum3+=a[n-1][i];
    }
    a[n-1][m-1]=0-sum3;
    rep(i,0,n-1){
        rep(j,0,m-1){
            cout<<a[i][j]<<" ";
        }
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