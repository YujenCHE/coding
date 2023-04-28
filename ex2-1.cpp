#include<stdio.h>
int main(void){
    printf("Characters: %c %c \n","a",65);
    printf("Decimals %d %1d\n",1977,650000L);
    printf("Preceding with blanks: %10d \n",1977);
    printf("Preceding with zeros: %010d \n",1977);
    printf("Some different radices: %d %x %o %#x %#x %#c\n",100,100,100,100,100,100);
    printf("Width trick: %*d \n",5,10);
    printf("%s \n","A string");
    printf("floats: %4.2f %+.0e %E \n",3.1416,3.1416,3.1416);
    return 0;
}
