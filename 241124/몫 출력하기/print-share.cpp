#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int i,count=0;

    while(true){
        cin>>i;
        if(i%2==1){continue;}
        else {
            cout<<i/2<<endl;
            count++;
        }

        if(count==3) break;
    }
    return 0;
}