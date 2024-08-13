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
   int t; cin>>t;
   while(t--){
    int n,k; cin>>n>>k;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(k>1){
        cout<<"YES"<<nl;
    }
    else{
        vi b(n);
        for(int i=0;i<n;i++) b[i]=a[i];
        sort(b.begin(),b.end());
        if(a==b) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
   } 
    return 0;
}