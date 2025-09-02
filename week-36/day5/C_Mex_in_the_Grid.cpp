#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    int row1=0,row2=n-1,col1=0,col2=n-1,need=n*n-1;
    while(row1<=row2 && col1<=col2){
        for(int i=col1;i<=col2;i++){
            v[row1][i]=need;
            need--;
        }
        row1++;
        for(int i=row1;i<=row2;i++){
            v[i][col2]=need;
            need--;
        }
        col2--;
        for(int i=col2;i>=col1;i--){
            v[row2][i]=need;
            need--;
        }
        row2--;
        for(int i=row2;i>=row1;i--){
            v[i][col1]=need;
            need--;
        }
        col1++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}