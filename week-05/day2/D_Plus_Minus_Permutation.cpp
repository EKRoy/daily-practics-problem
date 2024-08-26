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
void solve(){
    int n,x,y; cin>>n>>x>>y;
    int X=n/x,Y=n/y,overlap=0,sum=0,sum2=0;
    int l=(x/__gcd(x,y))*y;
    overlap=n/l;
    X-=overlap;
    Y-=overlap;
    // for(int i=0;i<X;i++){
    //     sum+=n--;
    // }
    int sum0=n*(n+1)/2;
    n-=X;
    int sum1=n*(n+1)/2;
    sum=sum0-sum1;
    sum2=Y*(Y+1)/2;
    cout<<sum-sum2<<endl;
}
int32_t main()
{
   ft;
   int tc; cin>>tc;
   while(tc--){
    solve();
   } 
    return 0;
}