// #include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#define T 1e-5 
using namespace std;
double f(double x){
   return pow(x,3)-pow(x,2)-1;
}
void bisection(double a,double b){
   if(f(a)*f(b)>=0){
      cout<<"The Equation is no root between the interval."<<endl;
      return;
   }
   double c;
   int step=1;
   while((b-a)>=T){
      c=(a+b)/2;
       cout << "Step " << step << ": c = " << c << ", f(c) = " << f(c) << endl;
       if(fabs(f(c))<=T) break;
       if(f(c)*f(a)<0){
         b=c;
       }
       else a=c;
       step++;
   }
   cout<<"The root is approximately:"<<c<<endl;
}
int main(){
    double a,b; 
    cout<<"Enter the interval [a,b]:"<<endl;
    cin>>a>>b;
    bisection(a,b);
   return 0;
}