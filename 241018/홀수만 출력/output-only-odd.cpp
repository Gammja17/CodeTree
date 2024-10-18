#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;
    cin>>a>>b;

    if(a%2==0){
        for(int k=a+1;k<=b;k+=2){
            cout<<k<<" ";
        }
    }
    else if(a%2!=0){
        for(int k=a;k<=b;k+=2){
            cout<<k<<" ";
        }
    }

    return 0;
}