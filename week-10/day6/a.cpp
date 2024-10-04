#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    string ans="";
    while(n>0){
        if(n%2) {
            ans+='1';
        }
        else ans+='0';
        n/=2;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}