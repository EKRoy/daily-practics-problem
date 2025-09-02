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
void solve(){
   int n; cin>>n;
   string s; cin>>s;
   int cnt0=count(s.begin(),s.end(),'0');
   int cnt1=n-cnt0;
   int ache=0,nai=0;
   for(int i=0;i<n/2;i++){
    if(s[i]==s[n-i-1]) ache+=2;
    else nai++;
   }
   vi ans(n+1,0);
   if(nai==0){
    for(int i=0;i<=n;i++) cout<<'1';
    cout<<endl;
    return;
   }
   ans[cnt1]=1,ans[cnt0]=1;
   for(int i=0;i<=n;i++){
    if(ans[i]==0){
        int l=i;
        if(i>=nai){
            l=i-nai;
            if(l<=ache) ans[i]=1; 
            else if(l==ache+1 && n%2==1) ans[i]=1;
        }
    }
   }
   for(int i:ans) cout<<i;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}