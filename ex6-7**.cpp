#include <iostream>

using namespace std;

void ASCII(){
    char c;
    cin>>c;
    int trans = int(c);
    cout<<c<<"的ASCII code為"<<trans;
}

int main(){
    ASCII();
    return 0;
}
