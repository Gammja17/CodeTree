#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.


    int age;
    double sum=0, av, count=0;

    cout<<fixed;
    cout.precision(2);

    while(true){
        
        cin>>age;
        if(age>=30){
            cout<<av;
            break;
        }

        count+=1;
        sum+=age;
        av=sum/count;

        
    }
    return 0;
}