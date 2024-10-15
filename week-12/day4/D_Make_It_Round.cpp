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
    ll n,m; cin>>n>>m;
    ll cnt_2=0,cnt_5=0;
    ll tempN=n;
    while(tempN%2==0){
        tempN/=2;
        cnt_2++;
    }
    while(tempN%5==0){
        tempN/=5;
        cnt_5++;
    }
    ll tempVal=1;
    if(cnt_5>cnt_2){
        ll p=cnt_5-cnt_2;
        while(p--){
            if(tempVal*2<=m){
                tempVal*=2;
            }
            else break;
        }
    }
    else{
        ll p=cnt_2-cnt_5;
        while(p--){
            if(tempVal*5<=m){
                tempVal*=5;
            }
            else break;
        }
    }
    while(tempVal*10<=m){
        tempVal*=10;
    }
    int val=m/tempVal;
    cout<<n*tempVal*val<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}