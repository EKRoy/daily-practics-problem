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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    string x,y; cin>>x>>y;
    vi A,B;
    for(char ch:x) A.pb(ch-'0');
    for(char ch:y) B.pb(ch-'0');
    vi c,d;
    int n=A.size();
    bool ok1=false;
    bool ok2=false;
    rep(i,0,n-1){
        if(ok1 || ok2){
            if(ok1){
                c.pb(min(A[i],B[i]));
                d.pb(max(A[i],B[i]));
            }
            else{
                 c.pb(max(A[i],B[i]));
                d.pb(min(A[i],B[i]));
            }
       }
        else{
       if(A[i]==B[i]){
        c.pb(A[i]);
        d.pb(B[i]);
       } 
       else if(A[i]>B[i]){
        ok1=true;
        c.pb(A[i]);
        d.pb(B[i]);
       }
       else{
        ok2=true;
        c.pb(A[i]);
        d.pb(B[i]);
       }
        }
    }
    for(int i:c) cout<<i;
    cout<<endl;
    for(int i:d) cout<<i;
    cout<<endl;

}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}