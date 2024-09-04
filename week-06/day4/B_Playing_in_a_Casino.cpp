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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
int cal(vector<int>&v){
    vsort(v)
    int n=v.size();
    int ans=0;
    for(int i=0;i<n;i++){
        int choto=i;
        int boro=n-1-i;
        ans+=choto*v[i]-boro*v[i];
    }
    return ans;
}
void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<m;i++){
        vector<int>temp(n);
        for(int j=0;j<n;j++){
            temp[j]=a[j][i];
        }
        ans+=cal(temp);
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}