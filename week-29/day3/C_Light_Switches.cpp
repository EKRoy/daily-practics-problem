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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &it:v)cin>>it;
    vsort(v)
    ll si=v.back(),ei=si+k-1;
    ll maxi=v.back(),mini=maxi+k-1;
    for(int i=0;i<n-1;i++){
        ll si=v.back(),ei=si+k,ans;
        if(((v.back()-v[i])/k) & 1){
            while(si<=ei){
                ll mid=(si+ei)/2;
                if(((mid-v[i])/k) & 1){
                    si=mid+1;
                }
                else{
                    ans=mid;
                    ei=mid-1;
                }
            }
            maxi=max(maxi,ans);
        }
        else{
            while(si<=ei){
                ll mid=(si+ei)/2;
                if(((mid-v[i])/k) & 1){
                    ei=mid-1;
                }
                else{
                    ans=mid;
                    si=mid+1;
                }
            }
            mini=min(mini,ans);
        }
        
    }
    if(maxi<=mini){
        cout<<maxi<<endl;
        return;
    }
    cout<<-1<<endl;
}
int32_t main()
{
   ft
   TC(t) solve(); 
    return 0;
}