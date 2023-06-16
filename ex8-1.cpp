#include <iostream>

using namespace std;

int main()
{
    int i,arr[] = {1,2,3,4,88,93,6};//不一定要指定陣列的大小
    
    printf("Number of the element => %lu\n\n", sizeof(arr) / sizeof(arr[0]));//lu是一條的 & 空了兩行
    
    
    for(i = 0; i<sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("Element %d => %d\n", i+1, arr[i]);//因為i是從第0個開始數的，所以要先+1
        
    }
    
    return 0;
    
}
