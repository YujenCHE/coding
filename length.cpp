#include <iostream>

using namespace std;

int main(){
    
    char s[80]="taiwan";//c++在字串最後都有隱形的\0 ， 而且是從第0格開始算格數的
    
    int length = printf("%s\n",s);//%s跟\n中間不能有空格，會算到字母數裡面去
    printf("the length is %d. \n",length);//推測 : 有0 ==不是 是\n
    printf("the length is %d. \n",length - 1);
    
    return 0;
    
}
