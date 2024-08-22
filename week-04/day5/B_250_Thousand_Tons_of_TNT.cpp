#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define endl "\n"
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
    int a[n];
    rep(i,1,n) cin>>a[i];
    int sum=0,ans=0;
    int mx=0,mn=0;
    for(int k=1;k<=n;k++){
        if(n%k==0){
            for(int i=1;i<=n;i++){
                sum+=a[i];
                if(i%k==0){
                  mx=max(mx,sum);
                  mn=min(mn,sum); 
                  sum=0; 
                }
            }
            int val=mx-mn;
            ans=max(val,ans);
        }
    }
    cout<<ans<<endl;
   } 
    return 0;
}