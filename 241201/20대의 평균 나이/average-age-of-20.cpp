#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.


    int age;
    double sum=0, count=0 ,av;

    cout<<fixed;
    cout.precision(2);

    while(1){
        cin>>age;
        if(age>=30){
            cout<<sum/count;
            break;
        }
        count+=1;
        sum+=age;
    }
    return 0;
}