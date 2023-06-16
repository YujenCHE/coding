#include <iostream>

using namespace std;

int main()
{
    char d[6] = {'h', 'a', 'p', 'p', 'y', '\0'};
    
    const int N = 9;//const => 不會被改掉
    int a[N] = {0};
    char b[N] = "hello";
    
    int i;
    for(i=0; d[i] != '\0'; i++)
    {
        printf("%c ", d[i]);
    }
    
    printf("\n");
    printf("\n ~~Hello World~~ \n");
    printf("\ni = %d", i);
    
    return 0;
    
}
