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
    int n,m,k; cin>>n>>m>>k;
    vi a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cnt=0;
    int l=0,r=0;
    while(l<n && r<m){
        if(abs(a[l]-b[r])<=k)
        {
             cnt++;
             l++;
             r++;
        }
        else if(a[l]<b[r]){
            l++;
        }
        else r++;
       
    }
    cout<<cnt<<nl;
    
    return 0;
}