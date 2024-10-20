#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    double a,b;
    cout<<fixed;
    cin>>a>>b;
    
    cout.precision(20);
    
    cout<<a/b;
    return 0;
}