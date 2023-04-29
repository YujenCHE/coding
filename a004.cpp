#include<iostream>

using namespace std;

int main(){
    int i;
    
    int a;
    cin>>a;
    if (a%4==0 && a%100!=0) cout<<"閏年";//&&是and
    else if (a%400==0) cout<<"閏年";// ||是 or
    else cout<<"平年";//!=是不等於
    return 0;
}
