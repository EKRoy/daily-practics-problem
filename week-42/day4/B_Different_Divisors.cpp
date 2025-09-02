#include<bits/stdc++.h>
using namespace std;
#define ll            long long int
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define nl             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define sz(x)          ((ll)(x).size())
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
ll lcm(ll a,ll b)
{
    return ((a/(__gcd(a,b)))*b);
}
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second<p2.second;
}
const int N=1e6;
vector<int>v(N);
void solve(){
   int d; cin>>d;
   int x=1+d,first,second;
   for(int i=x;i<v.size();i++){
    if(v[i]==1){
        first=i;
        break;
    }
   }
   for(int i=first+d;i<v.size();i++){
    if(v[i]==1){
        second=i;
        break;
    }
   }
//    cout<<first<<" "<<second<<nl;
   cout<<first*second<<nl;
}
int32_t main()
{
   
    ft
    for(int i=2;i<=N;i++){
        bool flag=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0) {
                flag=false;
                break;
            }
        }
        if(flag) v[i]=1;
    }
 TC(t) solve();
   
    return 0;
}