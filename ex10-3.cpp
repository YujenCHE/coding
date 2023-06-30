#include <iostream>

using namespace std;

void result(int age1, int age2)
{
    printf("%d", age1);
    printf("%d", age2);
}

int main()
{
    int agearr[] = {2, 3, 5, 8};
    result(agearr[1], agearr[2]);
    
    return 0;
}
