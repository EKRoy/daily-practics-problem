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
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n,q; cin>>n>>q;
    vi a(n);
    ll sum=0;
    rep(i,0,n-1)
    {
        cin>>a[i];
        sum+=a[i];
    }
    map<int,int>mp;
    int curr=-1;
   while(q--){
    int tp; cin>>tp;
    if(tp==2){
        int x; cin>>x;
        sum=1ll*n*x;
        curr=x;
        mp.clear();
    }
    else{
        int k,x; cin>>k>>x;
        k--;
        if(curr==-1){
            sum-=a[k];
            sum+=x;
            a[k]=x;
        }
        else{
            if(mp[k]==0){
                sum-=curr;
                sum+=x;
                mp[k]=x;
            }
            else{
                sum-=mp[k];
                sum+=x;
                mp[k]=x;
            }
        }
    }
    cout<<sum<<endl;
   }
    
}
int32_t main()
{
   ft
   solve(); 
    return 0;
}