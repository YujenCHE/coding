#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    do{
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
        if(b-a==c-b) cout<<d+b-a;
        else cout<<d*b/a;
        t++;
    }while(t<=20);
    
}
