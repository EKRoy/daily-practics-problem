#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--){
    int n,x; cin>>n>>x;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.rbegin(),a.rend());
    int ans=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum/(i+1)>=x)
        {
            // cout<<sum<<" ";
            ans++;
        } 
    }
    cout<<ans<<nl;
   } 
    return 0;
}