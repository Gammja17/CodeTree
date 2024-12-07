#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    bool t=false;
    cin>>n;

    for(int i=1;i<n;i++){
        if(n%i==0){
            t=true;
            break;
        }
        
    }
    if(t==false)    cout<<'N';
    else cout<<'C';

    return 0;
}