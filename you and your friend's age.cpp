#include <iostream>

using namespace std;

int main(){
    int x,y;
    
    printf("輸入你的年齡");
    scanf("%d",&x);
    printf("輸入你朋友的年齡");
    scanf("%d",&y);
    
    if(x>y){
        printf("你的年齡%d歲最大",x);
    }
    else if(x<y){
        printf("你的朋友年齡%d歲最大",y);
        
    }
    
    else {
        printf("你們兩個一樣大");
    }
    return 0;
}
