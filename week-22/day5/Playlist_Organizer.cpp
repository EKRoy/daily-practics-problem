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
    int n; cin>>n;
    map<int,string>mp;
    int cnt=0;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        if(s=="ADD"){
            int x; cin>>x;
            string str; cin>>str;
            if(mp.size()>=x){
                mp[cnt]=str;
            }
            else cout<<"Invalid"<<endl;
            cnt++;
        }
        else if(s=="DELETE"){
            int x; cin>>x;
            if(x<0 || x>=mp.size()){
                cout<<"Invalid\n";
            }
            else if(mp.count(x)==1){
                int l=mp.size();
                mp.erase(x);
                for(int j=x;j<l-1;j++){
                    mp[j]=mp[j+1];
                }
            }
            else cout<<"Invalid\n";
            
        }
        else{
            if(mp.size()==0){
                cout<<"EMPTY"<<endl;
            }
            else{
            for(auto [x,y]:mp){
                cout<<y<<" ";
            }
            cout<<endl;
            }
        }
    }
}
int32_t main()
{
   ft
   solve(); 
    return 0;
}