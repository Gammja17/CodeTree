#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b, sum=0;
    double av=0, count=0;

    cin>>a>>b;
    for(int i=a;i<=b; i++){
        if(i%5==0||i%7==0) {sum+=i; count+=1;}
    }

    cout<<fixed;
    cout.precision(1);

    av = sum/count;

    cout<<sum<<" "<<av;
    return 0;
}