#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve(){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    stack<int>st;
    for(int i=0;i<n/2;i++){
        st.push(a[i]);
        st.push(a[n-1-i]);
    }
    if(n%2==1) st.push(a[n/2]);
    for(int i=0;i<n;i++){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<nl;
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--){
    solve();
   } 
    return 0;
}