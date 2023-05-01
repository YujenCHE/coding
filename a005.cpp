#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int t=0; t<=20; t++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
        if(b-a==c-b) cout<<d+b-a;
        else cout<<d*b/a;
    }
    
}
