#include<iostream>

using namespace std;

int main(){
    int i;
    int student_num=45;
    
    for(i=0;i<student_num;i++){
        switch(i%3){
            case 0:
            printf("%d hello %d student \n",0,student_num);
            break;
            
            case 1://冒號:!!!!!!
            printf("%d hello %d student \n",1,student_num);
            break;
            
            case 2:
            printf("%d hello %d student \n",2,student_num);
            
        }
        
    }
    return 0;
}
