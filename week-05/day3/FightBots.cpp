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
    string s; cin>>s;
    int val_a=0,val_b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='R') val_a++;
        if(s[i]=='L') val_a--;
        if(s[i]=='U') val_b++;
        if(s[i]=='D') val_b--;
        
    }
    int total=abs(val_a-x)+abs(val_b-y);
    if(total==n){
        cout<<"Yes"<<endl;
    }
    else if(total<n){
        if((n-total)%2==0){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;
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