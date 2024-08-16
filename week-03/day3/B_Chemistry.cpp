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
    int n,x; cin>>n>>x;
    string s; cin>>s;
    map<char,int>cnt;
    rep(i,0,n-1){
        cnt[s[i]]++;
    }
    int res=0;
    for(auto [x,y]:cnt){
        if(y%2==1){
            res++;
        }
    }
    if(res-1<=x) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
   } 
    return 0;
}