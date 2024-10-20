#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int a=0,b=0,c=0;

    for(int i=1; i<=n; i++){
        if((i%2==0||i%3==0)&&i%12==0) c+=1;
        else if(i%2==0&&i%3==0) b+=1;
        else if(i%2==0) a+=1;
        else if(i%3==0) b+=1;
        else if(i%12==0) c+=1;
        else if(i<12) c=0;
        else if(i<3) c=0, b=0;
        else if(i<2) a=0,b=0,c=0;
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}