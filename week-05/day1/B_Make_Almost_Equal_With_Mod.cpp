#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define endl "\n"
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
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    int even=0,odd=0;
    rep(i,0,n-1){
        if(a[i]%2==0) even++;
        else odd++;
    }
    if(even>0 && odd>0) cout<<2<<endl;
    else{
        int k=2;
        while(k<=1e18){
            set<int>st;
            for(int val:a){
                st.insert(val%k);
            }
            if(st.size()==2){
                cout<<k<<endl;
                break;
            }
            k*=2;
        }
    }
   } 
    return 0;
}