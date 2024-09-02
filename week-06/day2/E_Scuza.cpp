#include<bits/stdc++.h>
using namespace std;
#define int            long long
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
    int n,q; cin>>n>>q;
    vi a(n);
    vector<pii>k;
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,q-1) {
        int x; cin>>x;
        k.pb(make_pair(x,i));
    }
    sort(k.begin(),k.end());
    vector<pii>ans;
    int sum=0,m=0;
    rep(i,0,q-1){
        while(k[i].F>=a[m] && m<n){
            sum+=a[m];
            m++;
        }
        ans.pb({k[i].S,sum});
    }
    vsort(ans)
    for(auto it:ans){
        cout<<it.S<<" ";
    }
    cout<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}