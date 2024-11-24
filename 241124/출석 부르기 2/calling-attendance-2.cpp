#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int i;

    while(true){
        cin>>i;

        if(i==1) cout<<"John";
        else if(i==2) cout<<"Tom";
        else if(i==3) cout<<"Paul";
        else if(i==4) cout<<"Sam";
        else {cout<<"Vacancy"; break;}
        cout<<endl;
    }
    return 0;
}