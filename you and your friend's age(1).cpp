#include <iostream>

using namespace std;

int main(){
    int x,y;
    
    cout<<"輸入你的年齡";
    cin>>x;
    cout<<"輸入你朋友的年齡";
    cin>>y;
    
    if(x>y){
        cout<<"你的年齡"<<x<<"歲最大";//用<<分隔
    }
    else if(x<y){
        cout<<"你朋友的年齡"<<y<<"歲最大";
        
    }
    
    else {
        cout<<"你們兩個一樣大";
    }
    return 0;
}
