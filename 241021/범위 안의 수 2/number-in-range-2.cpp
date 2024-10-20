#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, sum=0;
    for(int i=0;i<10;i++){
            cin>>n;
            if(n>=0&&n<=200){
                sum+=n;
            }
    }
    cout<<sum;

    return 0;
}