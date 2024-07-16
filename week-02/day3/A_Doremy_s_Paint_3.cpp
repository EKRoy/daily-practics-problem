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
    // if(n==2){
    //     cout<<"YES"<<nl;
    //     continue;
    // }
    map<int,int>cnt;
    for(int i=0;i<n;i++) {
        int x; cin>>x;
        cnt[x]++;
    }
    vi a;
    if(cnt.size()==2){
        for(auto [x,y]:cnt){
            a.pb(y);
        }
        // cout<<abs(a[0]-a[1]);
        int val=abs(a[0]-a[1]);
        if(val<=1){
            cout<<"Yes"<<nl;
        }
        else cout<<"No"<<nl;
        // for(int val:a) cout<<val<<" ";
    }
    else if(cnt.size()==1) cout<<"Yes"<<nl;
    else{
        cout<<"No"<<nl;
    }
   } 
     return 0;
}