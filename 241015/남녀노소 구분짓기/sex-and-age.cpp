#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int gen, age;
    cin>>gen>>age;

    if(gen==0)
    {
        if(age>=19) cout<<"MAN";
        else cout<<"BOY";
    }
    if(gen==1)
    {
        if(age>=19) cout<<"WOMAN";
        else cout<<"GIRL";
    }

    return 0;
}