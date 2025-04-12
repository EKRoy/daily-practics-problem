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
    ll sum=0;
    vi a(n);
    set<int>st;
    rep(i,0,n-1) {
        cin>>a[i];
        sum+=a[i];
        st.insert(a[i]);
    }
    if(n==1 && a[0]==0){
        pn
    }
    else if(n==1){
        py
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else{
        if(sum!=0){
            py
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else if(sum==0 && st.size()==1){
            pn
        }
        else{
            py
            cout<<2<<endl;
            cout<<1<<" ";
            int k=0;
            for(int i=0;i<n;i++){
                if(a[i]!=0){
                    cout<<i+1<<endl;
                    k=i;
                    break;
                }
            }
            // cout<<"1 1"<<endl;
            cout<<k+2<<" "<<n<<endl;
        }
    }
}
int32_t main()
{
   ft
    solve(); 
    return 0;
}