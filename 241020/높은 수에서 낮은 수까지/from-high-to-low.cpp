#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;
    cin>>a>>b;

    if(a>=b){
        for(int i=a; i>=b; i--){
            cout<<i<<" ";
        }
    }

    else if(a<b){
        for(int k=b; k>=a; k--){
            cout<<k<<" ";
        }
    }
    return 0;
}