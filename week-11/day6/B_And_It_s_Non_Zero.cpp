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
const int N=1e5+1;
int ar[N][20];
int32_t main()
{
   ft
  int p; cin>>p;
  while(p--){
    rep(i,0,19) ar[0][i]=0;

    for(int i=1;i<N;i++){
        int idx=0;
        int x=i;
        while(x>0){
            ar[i][idx]=(x%2)+ar[i-1][idx];
            x/=2;
            idx++;
        }
    }
     int l,r; cin>>l>>r;
    int y=INT_MIN;
    for(int i=0;i<20;i++){
        y=max(y,ar[r][i]-ar[l-1][i]);
   } 
   cout<<y<<endl;
//    cout<<r-l+1-y<<endl;

  }
    return 0;
}