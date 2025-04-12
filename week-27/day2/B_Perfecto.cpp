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
bool isperfect(ll v){
    ll k=sqrt(v);
    return (k*k==v);
}
void solve(){
    int n; cin>>n;
    ll s=(1ll*n*(n+1))/2;
    ll ss=sqrt(s);
    if(ss*ss==s){
        cout<<-1<<endl;
        return;
    }
    ll sum=0,val=0;
    for(int i=1;i<=n;i++){
        if(val!=0){
            cout<<val<<" ";
            sum+=val;
            val=0;
            continue;
        }
        sum+=i;
        if(isperfect(sum)){
            cout<<i+1<<" ";
            sum+=1;
            val=i;
        }
        else{
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int32_t main()
{
   ft
   TC(t) solve(); 
    return 0;
}