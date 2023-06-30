#include <iostream>

using namespace std;

int main()
{
    int a[6], i;
    
    for(i=0;i<6;i++)
    {
        a[i] = i;
    }
    
    printf("a[%d] = %d", 6, a[6]);
    
    return 0;
}
