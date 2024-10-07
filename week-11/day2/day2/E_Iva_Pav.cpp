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
    int n,x,q; cin>>n;
    ll bits[n][33];
    for(int i=0;i<n;i++){
        cin>>x;
        for(int j=32;j>=0;j--){
            if((x&(1ll<<j))==0){
                bits[i][j]=1;
            }
            else bits[i][j]=0;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=32;j>=0;j--){
            bits[i][j]+=bits[i-1][j];
        }
    }
    cin>>q;
    ll ans;
    while(q--){
        int l,k; cin>>l>>k;
        l-=1;
        int left=l;
        int right=n-1;
        int mid;
        ans=-1;
        while(left<=right){
            ll num=0;
            mid=left+(right-left)/2;
            for(int i=32;i>=0;i--){
                ll setbits=bits[mid][i]-(l==0?0:bits[l-1][i]);
                if(!setbits){
                    num+=(1ll<<i);
                }
            }
            if(num>=k){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        if(ans==-1){
            cout<<-1<<" ";
        }
        else cout<<ans+1<<" ";
    
    }
    // for(int i=0;i<n;i++){
    //     for(int j=32;j>=0;j--){
    //         cout<<bits[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}