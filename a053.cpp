/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"請輸入答對題數";
    cin>>n;
    
    if (0<n && n<=10)
    cout<<"你得了"<<n*6<<"分\n";
    
    else if(10<n && n<=20)
    cout<<"你得了"<<(n-10)*2+60<<"分\n";
    
    else if(20<n && n<=40)
    cout<<"你得了"<<60+20+(n-20)*1<<"分\n";
    
    else if(40<n)
    cout<<"你得了100分\n";
    
    else
    cout<<"你得了0分\n";
    return 0;
}
