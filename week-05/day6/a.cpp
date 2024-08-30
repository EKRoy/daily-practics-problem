#include<bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<(1<<1)<<endl;
    int n=5;
    int k=0;
    while((1<<(k+1))<=n-1) k++;
    cout<<k<<endl;
    cout<<__lg(5)<<endl;
    return 0;
}