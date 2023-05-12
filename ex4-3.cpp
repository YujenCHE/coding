#include <stdio.h>

using namespace std;

int main(){
    int x;
    scanf("%d",&x);
    
    if (x>5)      //if()不用分號
    printf("x>5 \n");
    
    else if(x<=10)
    printf("x<=5");
    
    else
    printf("x>10");
    
    return 0;
}
