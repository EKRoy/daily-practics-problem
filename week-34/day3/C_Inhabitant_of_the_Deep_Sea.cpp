#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve()
{
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++) cin>>a[i];
   
    int l=1,r=n;
    vi b;
    while(l<r && k>0)
    {
        int mn=min(a[l],a[r]);
        if(k>=2*mn){
            a[l]-=mn;
            a[r]-=mn;
            k-=2*mn;
        }
        else{
            if(k%2==1)
            {
                a[l]-=k/2+1;
                a[r]-=k/2;
                k=0;
            }
            else{
                a[l]-=k/2;
                a[r]-=k/2;
                k=0;
            }
            
        }
        if(a[l]==0) l++;
        if(a[r]==0) r--;
    }
    if(l==r){
        if(k>=a[l])
        {
            a[l]=0;
        }
        else{
            a[l]-=k;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=0) b.pb(a[i]);
        // cout<<a[i]<<" ";
    }
    cout<<(n-b.size())<<nl;
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    solve();
   } 
    return 0;
}