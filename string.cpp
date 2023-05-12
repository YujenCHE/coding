#include <iostream> 
#include <string> 
using namespace std; 

int main() { 
    string name = "caterpillar";//長度11

    for(int i = 0; i < name.length(); i++) {//數字0到10
        cout << name[i] << endl;//name[i]的i是單字字元第0到10個
    }


    return 0; 
}
