#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<long long>
int32_t main()
{
   ft;
   int tc; cin>>tc;
   while(tc--){
    int n; cin>>n;
    vector<pair<int,int>>a;
    rep(i,0,n-1){
        int x; cin>>x;
        a.pb({x,i});
    }
    sort(a.begin(),a.end());
    // for(auto it:a){
    //     cout<<it.first<<" "<<it.second<<nl;
    // }
    vi pre(n);
    pre[0]=a[0].first;
    rep(i,1,n-1){
        pre[i]=pre[i-1]+a[i].first;
    }
   vi reslt(n);
   stack<int>st;
    rep(i,0,n-1){
        st.push(a[i].second);
        if(i==n-1 || a[i+1].first>pre[i]){
            while(!st.empty()){
                reslt[st.top()]=i;
                st.pop();
            }
        }
    }
    for(int i:reslt) cout<<i<<" ";
    cout<<nl;
   } 
    return 0;
}