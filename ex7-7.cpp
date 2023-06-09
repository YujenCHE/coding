#include <iostream>

using namespace std;

int main(){
    int a[11],i,N = 0,Z = 0,O = 0;
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]>0){
            N++;
        }
        if(a[i]==0){
            O++;
        }
        if(a[i]<0){
            Z++;
        }
    }
    printf("正數有%d個\n負數有%d個\n0是%d個\n",N,Z,O);
    return 0;
}
