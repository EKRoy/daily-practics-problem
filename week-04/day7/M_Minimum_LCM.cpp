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
    int n; cin>>n;
    int a=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=n/i;
            break;
        }
    }
    cout<<a<<" "<<n-a<<endl;
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