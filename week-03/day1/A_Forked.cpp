#include<bits/stdc++.h>
using namespace std;
// #define int long long
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
    int a,b; cin>>a>>b;
    int xk,yk; cin>>xk>>yk;
    int xq,yq; cin>>xq>>yq;
    vector<int>dx={-a,-a,a,a,b,b,-b,-b};
    vector<int>dy={-b,b,b,-b,a,-a,a,-a};

    set<pair<int,int>>vk;
    set<pair<int,int>>vq;
    for(int i=0;i<8;i++){
        vk.insert({xk+dx[i],yk+dy[i]});
    }
    for(int i=0;i<8;i++){
        vq.insert({xq+dx[i],yq+dy[i]});
    }
    
    // for(auto it:vk){
    //     cout<<it.first<<" "<<it.second<<nl;
    // }
    // cout<<nl;
    // for(auto it:vq){
    //     cout<<it.first<<" "<<it.second<<nl;
    // }
    int cnt=0;
    for(auto it:vk){
        if(vq.find(it)!=vq.end())
        cnt++;
    }
    cout<<cnt<<nl;
   } 
    return 0;
}