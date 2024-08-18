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
    int a,b,n; cin>>a>>b>>n;
    vi arr(n);
    rep(i,0,n-1){
        cin>>arr[i];
    }
    int ans=b;
    rep(i,0,n-1){
        if(arr[i]>=a){
            ans+=a;
            ans--;
        }
        else ans+=arr[i];
    }
    cout<<ans<<nl;
   } 
    return 0;
}