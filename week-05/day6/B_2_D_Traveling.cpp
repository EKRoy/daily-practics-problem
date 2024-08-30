#include<bits/stdc++.h>
using namespace std;
#define int            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define endl             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define vrev(v)        reverse(v.begin(),v.end());
#define vsort(v)       sort(v.begin(),v.end());
#define rsort(v)       sort(v.rbegin(),v.rend());
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n,k,a,b; cin>>n>>k>>a>>b;
    if(k>=a && k>=b){
        cout<<0<<endl;
        
    }
    else{
    vector<pair<int,int>>v(k);
    int iniX=0,iniY=0,desX=0,desY=0;
    for(int i=0;i<k;i++){
        int x,y; cin>>x>>y;
        v[i].first=x;
        v[i].second=y;
        if(a-1==i){
            iniX=x;
            iniY=y;
        }
        if(b-1==i){
            desX=x;
            desY=y;
        }
    }
    for(auto it:v){
        // cout<<it.F<<" "<<it.S<<endl;
    }
    for(int i=k;i<n;i++){
        int x,y; cin>>x>>y;
        if(a-1==i){
            iniX=x;
            iniY=y;
        }
        if(b-1==i){
            desX=x;
            desY=y;
        }
    }
    int d=abs(iniX-desX)+abs(iniY-desY);
    int L=INT_MAX;
    int R=INT_MAX;
    for(auto it:v){
      int l=abs(iniX-it.first)+abs(iniY-it.S);
      int r=abs(desX-it.first)+abs(desY-it.S);
        L=min(l,L);
        R=min(r,R);
    }
    // cout<<d<<endl;
    cout<<min(d,L+R)<<endl;
    }
}
int32_t main()
{
    ft
   TC(t)
   solve(); 
    return 0;
}