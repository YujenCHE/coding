#include<stdio.h>
int main (){//main是函式,()裡有引數
    int a, b;
    float c,d;
    printf("A=> ");
    scanf("%d", &a);
    printf("B=> ");
    scanf("%d", &b);
    printf("C=> ");
    scanf("%f", &c);
    printf("D=> ");
    scanf("%f", &d);
    
    printf("A+B=%d\n", a+b);
    printf("A-B=%d\n", a-b);
    printf("A*B=%d\n", a*b);
    printf("A/B=%d\n", a/b);
    printf("D+C=%.1f\n", d+c);
    printf("D-C=%.1f\n", d-c);
    printf("D*C=%0.1f\n", d*c);
    printf("D/C=%0.1f\n", d/c);
    return 0;//對系統有意義
}
