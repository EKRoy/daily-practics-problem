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
void solve(){
    int n,m; cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
   set<char>row1,row2;
    for(int i=0;i<m;i++){
       row1.insert(a[0][i]);
    }
    for(int i=0;i<m;i++){
       row2.insert(a[n-1][i]);
    }
//    cout<<*row1.begin();
   if(row1.size()==1 && row2.size()==1 && *row1.begin()!=*row2.begin()){
    pn
    return;
   }
   row1.clear();
   row2.clear();
   for(int j=0;j<n;j++){
    row1.insert(a[j][0]);
   }
   for(int j=0;j<n;j++){
    row2.insert(a[j][m-1]);
   }
   if(row1.size()==1 && row2.size()==1 && *row1.begin()!=*row2.begin()){
    pn
    return;
   }
   py
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}