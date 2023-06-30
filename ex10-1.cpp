#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    arr[2] = arr[0] + arr[3];
    printf("%d", arr[2]);
    
    return 0;
}
