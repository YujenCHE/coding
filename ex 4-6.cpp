#include <iostream>

using namespace std;

int main(){
    int y , m;
    scanf("%d",&y);
    scanf("%d",&m);
    
    if (y%4==0 && y%100!=0 ||y%400==0){
        if (m==2){
            printf("這個月有29天");
        } 
        else if (m<=7 && m%2==1){
            printf("這個月有31天");
        }
        else if(m>7 && m%2==0){
            printf("這個月有31天");
        }
        else {
            printf("這個月有30天");
        }
        
    }
    else {
        if (m==2){
            printf("這個月有28天");
        }
        else if (m<=7 && m%2==1){
            printf("這個月有31天");
        }
        else if(m>7 && m%2==0){
            printf("這個月有31天");
        }
        else {
            printf("這個月有30天");
        
        }
        return 0;
    }

    
    return 0;
}
