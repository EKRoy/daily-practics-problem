#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
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
    if(n%2==0){
        cout<<-1;
    }
    else{
        int m=n/2;
        for(int i=n;i>m+1;i--){
            cout<<i<<" ";
        }
        for(int i=1;i<=m+1;i++){
            cout<<i<<" ";
        }
    }
    cout<<nl;
   } 
    return 0;
}