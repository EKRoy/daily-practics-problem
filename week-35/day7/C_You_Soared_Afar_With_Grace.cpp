#include<bits/stdc++.h>
using namespace std;
#define ll            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define en             "\n"
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
void solve(){
   int n; cin>>n;
   vi a(n),b(n);
   rep(i,0,n-1) cin>>a[i];
   rep(i,0,n-1) cin>>b[i];
   map<int,int>cnt;
   for(int i=0;i<n;i++){
    cnt[a[i]]=b[i];
   }
   for(int i=0;i<n;i++){
    if(cnt[b[i]]!=a[i]){
        cout<<-1<<en;
        return;
    }
   }
   if(n%2==1){
    map<int,int>mp2;
    int cnt=0,idx=-1;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]) {
            cnt++;
            idx=i;
        }
    }
    if(cnt!=1){
        cout<<-1<<en;
        return;
    }
    vector<pair<int,int>>v;
    if(idx!=n/2){
        v.pb({idx+1,n/2+1});
        swap(a[idx],a[n/2]);
        swap(b[idx],b[n/2]);
    }
    for(int i=0;i<n;i++){
        mp2[a[i]]=i+1;
    }
   
    for(int i=0;i<n/2;i++){
        if(a[i]==b[n-i-1]) continue;
        else{
            int x=mp2[b[n-i-1]];
            v.pb({i+1,x});
            swap(a[i],a[x-1]);
            swap(b[i],b[x-1]);
            swap(mp2[a[i]],mp2[a[x-1]]);
        }
       }
       cout<<v.size()<<endl;
       for(auto it:v){
        cout<<it.F<<" "<<it.S<<endl;
       }
       return;
   }
   map<int,int>mp;
   for(int i=0;i<n;i++){
    if(a[i]==b[i]){
        cout<<-1<<en;
        return;
    }
    mp[a[i]]=i+1;
   }
   vector<pair<int,int>>p;
   for(int i=0;i<n/2;i++){
    if(a[i]==b[n-i-1]) continue;
    else{
        int x=mp[b[n-i-1]];
        p.pb({i+1,x});
        swap(a[i],a[x-1]);
        swap(b[i],b[x-1]);
        swap(mp[a[i]],mp[a[x-1]]);
    }
   }
   cout<<p.size()<<endl;
   for(auto it:p){
    cout<<it.F<<" "<<it.S<<endl;
   }
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}