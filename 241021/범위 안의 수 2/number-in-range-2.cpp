#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, sum=0;
    double av=0,count=0;
    for(int i=0;i<10;i++){
            cin>>n;
            if(n>=0&&n<=200){
                sum+=n;
                count+=1;
            }
    }
    cout<<fixed;
    cout.precision(1);
    av=sum/count;
    cout<<sum<<" "<<av;

    return 0;
}