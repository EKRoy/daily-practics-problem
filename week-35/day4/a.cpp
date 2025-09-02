// #include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
void sortassending(int arr[],int n){
   for(int i=0;i<n;i++){
      for(int j=0;j<n-i-1;j++){
         if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
}
void sortdecending(int arr[],int n){
   for(int i=0;i<n;i++){
      for(int j=0;j<n-i-1;j++){
         if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
}
void displayarray(int ar[],int n){
   for(int i=0;i<n;i++) {
      cout<<ar[i]<<" ";
   }
}
int main(){
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
      cin>>ar[i];
    }
    
      sortassending(ar,n);
      displayarray(ar,n);
      cout<<endl;
      sortdecending(ar,n);
      displayarray(ar,n);
   return 0;
}
