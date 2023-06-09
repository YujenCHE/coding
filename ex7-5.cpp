#include <iostream>

using namespace std;

int main(){
    int arr[11],i,sum = 0;
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    
    printf("average = %d",sum/10);
    return 0;
}
