#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    cin>>a>>b;
    int prod=a;

    if(b==0) cout<<1;

    else{
        for(int i=1; i<b; i++){
        a=prod*a;
    }
    cout<<a;
    }
  
    return 0;
}