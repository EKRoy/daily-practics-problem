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
    vi div;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            div.pb(i);
            if(i!=n/i) div.pb(n/i);
        }
    }
    for(auto i:div){
        for(auto j:div){
            if(i==j) continue;
            for(auto k:div){
                if(1ll*i*j*k!=n) continue;
                set<int>st;
                st.insert(i);
                st.insert(j);
                st.insert(k);
                if(st.size()>2 && *st.begin()>1)
                {
                    py
                    for(auto it:st){
                        cout<<it<<" ";
                    }
                    cout<<endl;
                    return;
                }
            }
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