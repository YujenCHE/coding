#include <iostream>

using namespace std;

int main(){
    int a[5],i;
    for(i=0;i<4;i++){
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for(i=0;i<4;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    
    printf("最小的數為%d",min);
    return 0;
}
