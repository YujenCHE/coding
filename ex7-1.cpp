#include <iostream>

using namespace std;
/***
 n階乘的程式
 n!=n*(n-1)*(n-2)*...*3*2*1
 ***/
#if 0//1,2,3都有一樣的結果
int f(int n){
    if(n<=1){
        return 1;
    }else{
        return n*f(n-1);
    }
}

#else
int f(int n){
    int val = 1;
    int i;
    for(i=2;i<=n;i++){//階乘n!=n*(n-1)*(n-2)*...*3*2*1
        val=val*i;
    }
    return val;
}

#endif
int main()
{   int num;
    cin>>num;
    cout<<num<<"! = "<<f(num)<<endl;
    return 0;
}
