#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int i;

    while(true){
        cin>>i;
        if(i<25) cout<<"Higher";
        if(i>25) cout<<"Lower";
        if(i==25) {cout<<"Good"; break;}
        cout<<endl;

    }
    return 0;
}