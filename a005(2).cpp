#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t<=20){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
        if(b-a==c-b) cout<<d+b-a;
        else cout<<d*b/a;
        t++;
    }
    
}
