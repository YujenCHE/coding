#include <iostream>

using namespace std;

int func(int x, int y){
    return x+y;
}

int main(){
    int x,y;
    
    printf("Please input x = \n");
    scanf("%d", &x);
    printf("Please input y = \n");
    scanf("%d", &y);
    printf("%d + %d = %d",x,y,func(x,y));
    return 0;
}
