#include<bits/stdc++.h>
 // #include<iostream>
 // #include<cmath>
 // #include<algorithm>
using namespace std;
int main(){
    int n; cin>>n;
    map<int,int>cnt;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cnt[i]++;
            n/=i;
        }
    }
    if(n>1) cnt[n]++;
    for(auto [x,y]:cnt){
        cout<<x<<" "<<y<<endl;
    }
   return 0;
}