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
    ll n; cin>>n;
    set<ll>st;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        st.insert(x);
    }
    ll cnt=40;
  vector<ll>ans;
    while(cnt>0 && (*st.rbegin()!=0)){
        ll mn=*st.begin();
        ll mx=*st.rbegin();
        if((1ll*(mx+mn)%2)!=0){
            cout<<-1<<endl;
            return;
        }
        ll mid=1ll*(mx+mn)/2;
        ans.pb(mid);
        set<ll>newSet;
        for(auto it=st.begin();it!=st.end();it++)
        {
            newSet.insert(abs((*it)-mid));
        }
        st=newSet;
        cnt--;
    }
    if(st.size()!=1){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<ans.size()<<endl;
        for(int i:ans) cout<<i<<" ";
        cout<<endl;
    }
}
int main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}