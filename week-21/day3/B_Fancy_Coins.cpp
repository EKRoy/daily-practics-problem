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
    int m,k,a1,ak; cin>>m>>k>>a1>>ak;
    if(m<=a1 || (m/k>=m && m%k>=m)){
        cout<<0<<endl;
    }
    else{
        int need_k=min(ak,m/k);
        ll need_1=min(a1,m-need_k*k);
        ll rem_need=m-need_1-need_k*k;
        if(rem_need%k==0){
            cout<<rem_need/k<<endl;
        }
        else if((k-rem_need%k)<=a1){
            cout<<rem_need/k+1<<endl;
        }
        else{
            cout<<rem_need/k+rem_need%k<<endl;
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