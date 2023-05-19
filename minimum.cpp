#include <iostream>

using namespace std;

int main(){
   int m,n,k,j;
   printf("請輸入4個整數");
   scanf("%d %d %d %d", &m, &n, &k, &j);
   
   int min=m;
   
   if(min>n){
       min=n;
       
       if(min>k){
       min=k;
       
          if(min>j){
          min=j;
          }
       }
   } 
   
   /*******可加可不加
   else{
       min=m;
   }
   ******/
   printf("最小的數是%d\n",min);
   
   return 0;
}
