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
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    bool flag=true;
    for(auto [x,y]:mp)
    {
        if(y%2==1) flag=false;
    }
    if(flag==false){
        cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
   } 
    return 0;
}