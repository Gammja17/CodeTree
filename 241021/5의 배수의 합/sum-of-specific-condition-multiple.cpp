#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,sum=0;
    cin>>a>>b;
    
    if(a>=b){
        for(int i=a;i<=b; i++)
        {
        if(i%5==0) sum+=i;
        }
        cout<<sum;   
    }

    else if(b>a){
        for(int k=b;k<=a; k++)
        {
        if(k%5==0) sum+=k;
        }
        cout<<sum;
    }
    return 0;
}