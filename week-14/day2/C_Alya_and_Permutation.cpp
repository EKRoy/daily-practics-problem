#include<bits/stdc++.h>
using namespace std;
#define int            long long
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
    if(n%2==1){
        cout<<n<<endl;
        for(int i=2;i<=n-2;i++){
            cout<<i<<" ";
        }
        cout<<1<<" "<<n-1<<" "<<n<<endl;
    }
    else{
        bitset<61>bset(n);
        int val=bset.count();
        if(val==1){
            cout<<n+(n-1)<<endl;
           for(int i=2;i<=n-3;i++){
            cout<<i<<" ";
        }
        cout<<1<<" "<<n-2<<" "<<n-1<<" "<<n<<endl; 
        }
        else{
            int v=__lg(n);
            v=(1ll<<v)-1;
            // cout<<v<<endl;
            // cout<<n<<" ";
            cout<<v+v+1<<endl;
             for(int i=2;i<=n-3;i++){
                if(i!=v)
            cout<<i<<" ";
        }
        cout<<1<<" "<<n-2<<" "<<n<<" "<<n-1<<" "<<v<<endl;
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