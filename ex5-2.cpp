#include<stdio.h>

int main(){
    char op;operator在C++是保留字所以要換
    double first,second;
    
    printf("Please enter + - * /");
    scanf("%c", &op);
    printf("Please enter 2 operands");
    scanf("%lf %lf", &first, &second);
    
    switch(op){
        case'+':    //case要用冒號:
        printf("%.1lf + %.1lf = %.1lf ",first,second,first + second);
        break;//用break跟其他事件分開
        
        case'-':
        printf("%.1lf - %.1lf = %.1lf",first,second,first - second);
        break;
        
        case'*':
        printf("%.1lf * %.1lf = %.1lf",first,second,first * second);
        break;
        
        case'/':
        //以下是chatGDP加的
        if (second != 0) {
                printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        } 
        else {
                printf("Error 不能用0除!");  // 處理除以零的情況
        }
        break;
        
        default:
            printf("Error: 無效運算子");  // 處理無效運算子的情況
            break;
        
        
    }
    return 0;
}
