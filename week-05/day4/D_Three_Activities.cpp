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
    int n; cin>>n;
    vi a(n),b(n),c(n);
    vector<pair<int,int>>va,vb,vc;
    rep(i,0,n-1){
        cin>>a[i];
        va.pb(make_pair(a[i],i));
    }
    rep(i,0,n-1){
        cin>>b[i];
        vb.pb(make_pair(b[i],i));
    }
    rep(i,0,n-1){
        cin>>c[i];
        vc.pb(make_pair(c[i],i));
    }
    rsort(va)
    rsort(vb)
    rsort(vc)
    int ans=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(va[i].S!=vb[j].S && va[i].S!=vc[k].S && vb[j].S != vc[k].S){
                    ans=max(ans,va[i].F+vb[j].F+vc[k].F);
                }
            }
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve();
    return 0;
}