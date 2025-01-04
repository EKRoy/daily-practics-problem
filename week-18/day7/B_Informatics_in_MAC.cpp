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
void solve(){
    int n; cin>>n;
    vi v(n),prefix(n),suffix(n);
   for(auto &i:v) cin>>i;
   set<int>preMex,SuffMex;
   int a=0,b=0;
   for(int i=0;i<n;i++){
        preMex.insert(v[i]);
        while(preMex.count(a)) a++;
        prefix[i]=a;
   }
    for(int i=n-1;i>=0;i--){
        SuffMex.insert(v[i]);
        while(SuffMex.count(b)) b++;
        suffix[i]=b;
   }
   vector<pii>ans;
   for(int i=0;i<n-1;i++){
    if(prefix[i]==suffix[i+1]){
        ans.pb({1,i+1});
        ans.pb({i+2,n});
        break;
    }
   }
   if(ans.empty()) cout<<-1<<endl;
   else {
    cout<<2<<endl;
    for(auto it:ans){
        cout<<it.F<<" "<<it.S<<endl;
    }
   }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}