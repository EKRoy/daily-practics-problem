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
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int val:s) cout<<val<<" ";
    sort(a.begin(),a.end());
    vi b;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            b.pb(a[i]);
        }
    }
    for(int val:b) cout<<val<<" ";
    cout<<nl;
   } 
    return 0;
}