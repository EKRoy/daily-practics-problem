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
void solve(){
    int n,k; cin>>n>>k;
    vector<int>v1[k+1];
    for(int i=1;i<=k;i++){
        v1[i].pb(0);
    }
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        v1[x].pb(i);
    }
    for(int i=1;i<=k;i++){
        v1[i].pb(n+1);
    }
    int ans=n+1;
    for(int i=1;i<=k;i++){
        int z1=0,z2=0;
        for(int j=1;j<v1[i].size();j++)
        {
            int a1=(v1[i][j]-v1[i][j-1]-1);
            if(a1<z2){

            }
            else if(a1>=z2 && a1<=z1){
                z2=a1;
            }
            else if(a1>=z1){
                z2=z1;
                z1=a1;
            }
        }
        ans=min(ans,max(z2,z1/2));
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