#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int D=(b*b)-(4*a*c);
    if(D>0) cout<<"Two different roots X1="<<(-b + sqrt(D))/(2*a)<<"X2="<<(-b - sqrt(D))/(2*a);
    else if(D==0) cout<<"Two same roots X="<<(-b)/(2*a);
    else cout<<"No real root";
    
}
