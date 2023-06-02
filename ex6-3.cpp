#include <iostream>

using namespace std;

char work;
int x,y;

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
printf("Please input +-*/ \n");
scanf("%c", &work);
printf("Please input x = \n");
scanf("%d", &x);
printf("Please input y = \n");
scanf("%d", &y);

switch(work){
    case'+':
    printf(" %d + %d = %d ",x,y,Plus(x,y));
    break;
    
    case'-':
    printf(" %d - %d = %d",x,y,Minus(x,y));
    break;
    
    case'*':
    printf(" %d * %d = %d",x,y,Mutiply(x,y));
    break;
}
}
