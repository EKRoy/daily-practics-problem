#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve(){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int m; cin>>m;
    vi b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    int indx=-1;
    for(int i=0;i<n;i++){
        for(int j=indx+1;j<m;j++){
            if(a[i]==b[j]-1 || a[i]==b[j]+1 || a[i]==b[j]){
                ans++;
                indx=j;
                break;
            }
        }
    }
    cout<<ans<<nl;
}
int32_t main()
{
   ft;
   solve();
    return 0;
}