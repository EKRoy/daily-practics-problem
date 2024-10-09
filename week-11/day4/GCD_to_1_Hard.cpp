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
    int l,r; cin>>l>>r;
    int mat[l][r];
    if(l==r){
    for(int i=0;i<l;i++){
        for(int j=0;j<r;j++){
            if(i==j){
                mat[i][j]=3;
            }
            else
            mat[i][j]=2;
        }
    }
    }
    else{
     for(int i=0;i<l;i++){
         for(int j=0;j<r;j++){
            if(i==j){
                mat[i][j]=3;
            }
            else if((i==l-1) && j>i){
               mat[i][j]=3; 
            }
             else
            mat[i][j]=2;
            if(i>=r && j==0){
                mat[i][j]=3;
            }
        }
    }
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<r;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}