#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt3=0,cnt5=0;
    int k;
    for(int i=1; i<=10; i++){
        cin>>k;
        if(k%3==0) cnt3+=1;
        if(k%5==0) cnt5+=1;
    }
    cout<<cnt3<<" "<<cnt5;
    return 0;
}