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
#define vlowerB(v,x)   lower_bound(v.begin(),v.end(),x)
#define vupperB(v,x)   upper_bound(v.begin(),v.end(),x)
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<int>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=998244353;
int fact(int n){
    if(n==0 || n==1) return 1;
    return (n*fact(n-1))%MOD;
}
void solve(){
    string s; cin>>s;
    int cnt=1,op=0,overal=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
        else{
            overal=(overal*cnt)%MOD;
            op=(op+(cnt-1))%MOD;
            cnt=1;
        }
    }
    int ans=(overal*fact(op))%MOD;
    cout<<op<<" "<<ans<<endl;
    
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}