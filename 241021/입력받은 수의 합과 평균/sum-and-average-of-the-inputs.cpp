#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum=0;
    double av=0, k;
    cout<<fixed;
    cout.precision(1);
    cin>>n;
    k=n;
    int l;

    for(int i=0;i<k;i++){
        cin>>l;
        sum+=l;
    }

    av=sum/k;
    cout<<sum<<" "<<av;
    return 0;
}