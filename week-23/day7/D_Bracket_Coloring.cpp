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
    string s; cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(') cnt++;
        else cnt--;
    }
    if(cnt!=0){
        cout<<-1<<endl;
        return;
    }
        vi ans(n,2);
        bool flag=true;
        stack<int>st;
        for(int i=0;i<n;i++){
            if(s[i]=='(') {
                st.push(i);
            }
            else{
                if(!st.empty()){
                    ans[st.top()]=1;
                    ans[i]=1;
                    st.pop();
                }
                else {
                    flag=false;
                    continue;
                }
            }
        }
       if(!flag){
         while(!st.empty()){
            st.pop();
         }
         ans.assign(n,2);
         for(int i=0;i<n;i++){
            if(s[i]==')') st.push(i);
            else{
                if(st.empty()){
                    flag=false;
                    continue;
                }
                ans[st.top()]=1;
                ans[i]=1;
                st.pop();
            }
         }
       }
        cout<<*max_element(ans.begin(),ans.end())<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}