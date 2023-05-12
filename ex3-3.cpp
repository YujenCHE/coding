#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a,b;
    
    a=6;
    a+=7;
    printf("%d \n",a);
    a-=7;
    printf("%d \n",a);
    a*=7;
    printf("%d \n",a);
    a/=7;
    printf("%d \n",a);
    a%=5;
    printf("%d \n",a);
    
    
    b=8;
    b&=5;//chatGDP 如果 a 和 b 的同一個位元都為 1，那麼結果就是 1，否則結果就是 0。
    printf("%d \n",b);
    b|=5;//把5這個值給b
    printf("%d \n",b);
    b^=5;//如果這兩個值的二進位相同，顯示1，否則0，並把b變成5
    printf("%d \n",b);
    
    

    return 0;
    


    
}
