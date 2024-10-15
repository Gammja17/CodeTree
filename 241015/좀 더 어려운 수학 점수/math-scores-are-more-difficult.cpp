#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int Am, Ae, Bm, Be;
    cin>>Am>>Ae>>Bm>>Be;

    if(Am>Bm) cout<<"A";
    else if(Bm>Am) cout<<"B";
    else if(Am==Bm && Ae>Be) cout<<"A";
    else if(Am==Bm && Be>Ae) cout<<"B";
    return 0;
}