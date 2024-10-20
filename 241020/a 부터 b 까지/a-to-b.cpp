#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;
    cin>>a>>b;
    int i=a;

    while (i<=b){
        if(i%2==1){
            cout<<i<<" ";
            i*=2;
        }
        else if(i%2==0){
            cout<<i<<" ";
            i+=3;
        }
    }
    return 0;
}