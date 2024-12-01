#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, count=0;

    cin>>n;
    while(1){
        
        if(n==1){
            cout<<count;
            break;
        }

        if(n%2==0){
            n/=2;
            count+=1;
        }
        else if(n%2!=0){
            n=n*3+1;
            count+=1;
        }

    }


    return 0;
}