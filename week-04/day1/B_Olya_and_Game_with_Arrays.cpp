#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<long long>
int32_t main()
{
   ft;
   int tc; cin>>tc;
   while(tc--){
    int n; cin>>n;
    int m=n;
    vector<int>f1,f2;
    while(m--){
        int p; cin>>p;
        vi a(p);
        rep(i,0,p-1) {
            cin>>a[i];
        }
        auto it=*min_element(a.begin(),a.end());
        f1.pb(it);
        a.erase(find(a.begin(),a.end(),it));
        f2.pb(*min_element(a.begin(),a.end()));
    }
    sort(f2.begin(),f2.end());
    int l=f2.size();
    int ans=*min_element(f1.begin(),f1.end());
    rep(i,1,l-1){
        ans+=f2[i];
    }
    cout<<ans<<nl;
   } 
    return 0;
}