#include <iostream>

using namespace std;

int temp(int a, int b);

int main(){
    int a,b;
    
    printf("請輸入攝氏 \n");
    scanf("%d", &a);
    printf("攝氏%d˚C 是華氏%d˚F",a,temp(a,b));
    return 0;
}

int temp(int a, int b){
    b=a*1.8+32;
    return b;
}
