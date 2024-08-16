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
    int n,k; cin>>n>>k;
    vi a(n);
    int prod=1;
    rep(i,0,n-1){
        cin>>a[i];
        prod*=a[i];
        prod%=k;
    }
    
    int ans=INT_MAX;
    if(prod%k==0){
        cout<<0<<nl;
    }
    else{
        
             rep(i,0,n-1){
            int val=a[i]%k;
            val=k-val;
            ans=min(ans,val);
             }
            if(k==4){
            int even=0;
            rep(i,0,n-1){
                if(a[i]%2==0) even++;
            }
            int ans2=0;
            if(n==1){
                int val=a[0]%k;
                val=k-val;
                cout<<val<<nl;
                continue;
            }
            ans2=max(0*1ll,2-even);
            cout<<min(ans,ans2)<<nl;
            }
            else{
                cout<<ans<<nl;
            }
        
    }
    
   } 
    return 0;
}