#include<bits/stdc++.h>
using namespace std;
#define ll            long long
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
#define vlowerB(v,x)   lower_bound(v.begin(),v.end(),x)
#define vupperB(v,x)   upper_bound(v.begin(),v.end(),x)
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<int>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
    int N=1e7+7;
    vector<pair<int,int>>p;
vector<bool>v(N+1,true);
vi b;
void solve(){
    for(int i=2;i*i<=N;i++){
        if(v[i]){
            for(int j=i*i;j<=N;j+=i){
                v[i]=false;
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(v[i]){
            b.pb(i);
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i]==b[i+1]+2){
            p.pb({b[i],b[i+2]});
            i++;
        }
    }
    
}
int32_t main()
{
   ft;
   solve(); 
  int n;
    while((cin>>n)){
        cout<<p[n-1].first<<" "<<p[n-1].second<<endl;
    }
    return 0;
}