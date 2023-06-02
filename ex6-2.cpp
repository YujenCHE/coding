#include <iostream>

using namespace std;

int Plus(int x, int y){
    return x+y;
}

int Minus(int x, int y){
    return x-y;
}

int Mutiply(int x, int y){
    return x*y;
}



int main(){
    int x,y;
    
    printf("Please input x = \n");
    scanf("%d", &x);
    printf("Please input y = \n");
    scanf("%d", &y);
    printf("%d + %d = %d \n",x,y,Plus(x,y));
    printf("%d - %d = %d \n",x,y,Minus(x,y));
    printf("%d X %d = %d \n",x,y,Mutiply(x,y));
    
    return 0;
}
