#include<bits/stdc++.h>
 // #include<iostream>
 // #include<cmath>
 // #include<algorithm>
using namespace std;
int main(){
    int a,b,c; cin>>a>>b>>c;
    double dis=b*b-4*a*c;
    int x;
    double r1,r2,r,real,imag;
    if(dis>1) x=1;
    else if(dis==0) x=2;
    else x=3;
    switch(x){
        case 1:
             r1 = (-b + sqrt(dis)) / (2 * a);
             r2 = (-b - sqrt(dis)) / (2 * a);
            cout << "Two real and distinct roots:\n";
            cout << "Root 1 = " << r1 << "\n";
            cout << "Root 2 = " << r2 << "\n";
            break;
        case 2:
             r = -b / (2 * a);
            cout << "Two real and equal roots:\n";
            cout << "Root = " << r << "\n";
            break;
        case 3:
              real = -b / (2 * a);
            imag = sqrt(-dis) / (2 * a);
            cout << "Complex roots:\n";
            cout << "Root 1 = " << real << " + " << imag << "i\n";
            cout << "Root 2 = " << real << " - " << imag << "i\n";
            break;
         default:
            cout << "Invalid case!";
    }
   return 0;
}