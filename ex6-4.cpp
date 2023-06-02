#include <iostream>

using namespace std;

int Area(int h, int w){
    return h*w;
}

int main(){
    int h,w;
    
    printf("Please input h = \n");
    scanf("%d", &h);
    printf("Please input w = \n");
    scanf("%d", &w);
    printf("The area of this rectangle is %d cm^2",Area(h,w));
    return 0;
}
