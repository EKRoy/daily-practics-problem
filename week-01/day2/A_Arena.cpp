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
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int indx=-1;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            indx=i;
            break;
        }
    }
    if(indx!=-1)
    cout<<n-indx<<nl;
    else cout<<0<<nl;
   } 
    return 0;
}