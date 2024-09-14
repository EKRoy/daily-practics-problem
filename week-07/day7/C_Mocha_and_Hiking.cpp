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
#define vi             vector<int>
const int MOD=1e9+7;
void solve(){
    int n; cin>>n;
    vi a(n+1);
    rep(i,1,n) cin>>a[i];
    if(a[1]==1){
        cout<<n+1<<" ";                
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
     if(a[n]==0){
        for(int i=1;i<=n+1;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0 && a[i+1]==1){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<n+1<<" ";
            for(int j=i+1;j<=n;j++)
            {
                cout<<j<<" ";
            }
            break;
        }
    }
    cout<<endl;
    
}
int main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}