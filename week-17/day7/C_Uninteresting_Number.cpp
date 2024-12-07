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
    string s; cin >> s;
    ll cnt_2=0,cnt_3=0,sum=0;
    rep(i,0,s.size()-1){
        if(s[i]=='2') cnt_2++;
        if(s[i]=='3') cnt_3++;
        sum+=s[i]-'0';
    }
    ll diff=(9-sum%9)%9;
    for(ll b=0;b<=cnt_3;b++){
        ll new_diff=(diff-6ll*b)%9;
        if(new_diff<0){
            new_diff+=9;
        }
        ll a=(new_diff*5)%9;
        if(a<=cnt_2){
            py
            return;
        }
    }
    pn
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}