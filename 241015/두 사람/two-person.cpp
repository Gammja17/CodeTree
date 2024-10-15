#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    char ga,gb;
    cin >> a>>ga>>b>>gb;

    if((a>=19&&ga=='M')||(b>=19&&gb=='M')) cout<<"1";
    else cout<<"0";
    return 0;
}