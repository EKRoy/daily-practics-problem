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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<int>
const int MOD=1e9+7;
void solve(){
    int n; cin>>n;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    map<int,int>mp;
    for(int i=0;i<n;i++){
    bitset<32>b(a[i]);
    int idx=-1;
    rep(i,0,31){
        if(b[i]==1){
            idx=i;
        }
    }
    mp[idx]++;
    }
    int ans=0;
    for(auto [x,y]:mp){
        ans+=y*(y-1)/2;
        // cout<<x<<" "<<y<<endl;
    }
    cout<<ans<<endl;
}
int main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}