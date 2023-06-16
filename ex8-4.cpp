#include <iostream>

using namespace std;

int main()
{
    int *i, ii;
    ii = 3;
    i = &ii;
    
    printf("Start\n");
    printf(" *i = %d\n", *i);//印i = ii(3)的數字
    printf(" &ii = %x\n", &ii);//印ii的位址
    printf(" i = %x\n", i);//印i指定成ii的位址
    printf("End");
    
    return 0;
    
    //%x 是十六進位
}
