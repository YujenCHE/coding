#include <iostream>

using namespace std;

int main()
{
    int *i, ii;
    ii = 3;
    i = &ii;
    int j,arr[] = { 1, 2, 3, 4, 88, 93, 6};//去掉[] =>連續位置的指標
    
    printf("Start\n");
    printf(" *i = %d\n", *i);//印i = ii(3)的數字
    printf(" &ii = %x\n", &ii);//印ii的位址
    printf(" i = %x\n", i);//印i指定成ii的位址
    printf("End\n");
    
    ii = sizeof(arr) / sizeof(arr[0]);
    i=arr;
    
    for(j=0;j<ii;j++)
    {
        printf("%d : %x\n",j,*i);
        i++;//+ 4byte
    }
    
    printf("\n");
    return 0;
    
    //%x 是十六進位
}
