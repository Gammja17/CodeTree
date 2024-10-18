#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b,c;
    char n1,n2,n3;

    cin>>n1>>a>>n2>>b>>n3>>c;

    if((n1=='Y'&&n2=='Y') ||(n2=='Y'&&n3=='Y')||(n1=='Y'&&n3=='Y'))
    {
        int count=0;
        if(a>=37) count+=1;
        if(b>=37) count+=1;
        if(c>=37) count+=1;

        if(count>=2) cout<<"E";
        else cout<<"N";
    }
    else cout<<"N";


    return 0;
}