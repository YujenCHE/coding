#include <stdio.h>

using namespace std;

int main(){
    int R;
    scanf("%d",&R);//要放前面，R才有意義
    int A=3.14*R*R;
    int C=3.14*2*R;
    
    
    if (R>=0) { //要有{}
        printf("以 %d 為半徑的圓周長是%d \n",R,C);
        printf("以 %d 為半徑的圓面積是%d \n",R,A);
    }
    else{      //要有{}
        printf("請輸入有效數字");
    }
    return 0;
    

}
