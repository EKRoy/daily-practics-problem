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
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    bool even=false,odd=false;
    int ans=INT_MIN,temp=0;
    int temp2=0,cnt=2;
    rep(i,0,n-1){
        if(a[i]==0){
            even=false;
            odd=false;
        }
        else if(a[i]%2==0 && !even){
            temp+=a[i];
            ans=max(ans,temp);
            even=true;
            odd=false;
            if(cnt<=2){
                temp2=a[i];
            ans=max(temp2,ans);
            cnt++;
            }
            
        }
        else if(a[i]%2!=0 && !odd){
            temp+=a[i];
            ans=max(ans,temp);
            even=false;
            odd=true;
              if(cnt<=2){
                temp2=a[i];
            ans=max(temp2,ans);
            cnt++;
            }
        }
        else{
            temp=a[i];
            ans=max(temp,ans);
            if(a[i]%2==0) even=true;
            else odd=true;
        }
        cout<<ans<<" ";
    }
    // cout<<ans<<nl;
   } 
    return 0;
}