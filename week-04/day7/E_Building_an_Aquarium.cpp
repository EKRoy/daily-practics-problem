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
    int n,x; cin>>n>>x;
    vi a(n);
    rep(i,0,n-1)
    cin>>a[i];
    int l=0,r=1e10;
    int mid=0;
    while(l<r-1){
        int mid=(r+l)/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=max(1ll*0,mid-a[i]);
        }
        if(sum<=x){
            l=mid;
        }
        else r=mid;
    }
    cout<<l<<endl;
   } 
    return 0;
}