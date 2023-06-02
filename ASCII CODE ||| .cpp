#include <iostream>

using namespace std;

int main(){
    
    char c = 'B';//一ˋ定要用''包起來
    int trans = int(c);
    
    trans=trans<<1;  //跑出132    66 : 0100 0010 變成 132 : 1000 0100 ==>左移一格
    
    trans=trans>>1;  //先變回66
    trans=trans>>1;  //跑出33     66 : 0100 0010 變成 33  : 0010 0001 ==>右移一格
    
    trans=trans<<1;  //先變回66
    trans+=1;        //變成67
    
    cout<<char(trans)<<"\n";
    
    cout<<trans;
    return 0;
}
