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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n,k; cin>>n>>k;
    vi a(k);
    rep(i,0,k-1) cin>>a[i];
    sort(a.begin(),a.end());
    vi b(k);
    rep(i,1,k-1){
        b[i-1]=a[i]-a[i-1]-1;
    }
    b[k-1]=n-a[k-1]+a[0]-1;
    int sum=0;
    int cnt=0;
    sort(b.rbegin(),b.rend());
    // for(int i:b) cout<<i<<" ";
    if(b[0]==1){
        sum+=1;
    }
    else if(b[0]!=0)
    sum=b[0]-1;
    for(int i=1;i<k;i++){
        cnt+=4;
        b[i]-=cnt;
        if(b[i]<=0) break;
        if(b[i]==1){
            sum++;
            break;
        }
        else{
            sum+=b[i]-1;
        }
        
    }
    cout<<n-sum<<endl;
   
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}