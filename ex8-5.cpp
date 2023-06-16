#include <iostream>

using namespace std;

int main()
{
    int arr[4] = {1,2,3,4};
    int a[4] = {2,4,6,8};
    
    int i;
    for(i = 0; i<4; i++)
    {
        printf("%d : %x\n", arr[i], &arr[i]);
    }
    
    printf("\n");
    
    int j;
    for(j = 0; j<4; j++)
    {
        printf("%d : %x\n", a[j], &a[j]);
    }
}
