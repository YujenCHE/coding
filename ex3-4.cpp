#include <iostream>

using namespace std;

int main(void){
    int a,b;
    int bool_value;
    
    a=7;
    b=5;
    
    bool_value = (a<b);
    printf("a<b==> %d \n",bool_value);
    bool_value = (a>b);
    printf("a>b==> %d \n",bool_value);
    return 0;
}
