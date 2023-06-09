#include <iostream>

using namespace std;

int main(){
    int arr[5],i;
    for(i=0;i<5;i++){
        arr[i] = i*20;
        printf("arr[%d] = %d \n",i,arr[i]);
    }
    return 0;
}
