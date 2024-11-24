#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x=0, count=0;
    cin>>n;

    for(int i=1; i<=5000; i++){
        n/=i;
        count++;
        if(n<=1){
            break;
        }
    }

    cout<<count;
    return 0;
}