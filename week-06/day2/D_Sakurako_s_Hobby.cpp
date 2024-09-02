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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n; cin>>n;
    int ar[n+1];
    rep(i,1,n) cin>>ar[i];
    string s; cin>>s;
    int b[n+1]={0},v[n+1]={0};
    for(int i=1;i<=n;i++){
        if(v[i]) continue;
        int cnt=0;
        while(!v[i]){
            v[i]=1;
            cnt += s[i - 1] == '0';
            i=ar[i];
        }
        while(v[i]!=2){
            b[i]=cnt;
            v[i]=2;
            i=ar[i];
        }
    }
    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}