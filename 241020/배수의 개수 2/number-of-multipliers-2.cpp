#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int k;
    int cnt=0; 
    for(int i=0; i<10; i++){
        cin>>k;
        if(k%2!=0){
            cnt+=1;
        }
    }
    cout<<cnt;

    return 0;
}