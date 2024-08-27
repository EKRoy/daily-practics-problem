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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
vi pairs[1001];
void solve(){
    int n; cin>>n;
    vi dx[1001];
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        dx[x].pb(i);
    }
    int ans=-1;
    for(int i=1;i<=1000;i++){
        for(int j:pairs[i]){
            if(!dx[i].empty() && !dx[j].empty()){
                ans=max(ans,dx[i].back()+dx[j].back());
            }
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   for(int i=1;i<=1000;i++){
    for(int j=1;j<=1000;j++){
        if(__gcd(i,j)==1){
            pairs[i].pb(j);
        }
    }
   }
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}