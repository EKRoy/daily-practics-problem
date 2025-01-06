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
    vi a[n];
    vi all;
    for(int i=0;i<n;i++){
        int k; cin>>k;
        a[i].resize(k);
        for(int j=0;j<k;j++){
            cin>>a[i][j];
            all.pb(a[i][j]);
        }
    }
    vsort(all)
    all.erase(unique(all.begin(),all.end()),all.end());
    int ans=0;
    for(int val=1;val<=50;val++){
        vi temp;
        for(int i=0;i<n;i++){
            bool found=false;
             for(int j=0;j<a[i].size();j++){
                if(a[i][j]==val){
                    found=true;
                    break;
                }
             }
             if(!found){
                for(int j=0;j<a[i].size();j++){
                    temp.pb(a[i][j]);
                }
             }
        }
        vsort(temp)
        temp.erase(unique(temp.begin(),temp.end()),temp.end());
        if(temp!=all){
            ans=max(ans,(int)temp.size());
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}