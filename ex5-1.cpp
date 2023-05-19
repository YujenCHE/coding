#include <iostream>

using namespace std;

int main(void){
    int a;
    scanf("%d",&a);
    
    if(90<=a && a<=100){ //不是90<=a<=100，要用運算子
        printf("A等");
    }
    else if(80<=a && a<90){
        printf("B等");
    }
    else if(70<=a && a<80){
        printf("C等");
    }
    else if(60<=a && a<70){
        printf("D等");
    }
    else{
        printf("F等");
    }
    return 0;
}
