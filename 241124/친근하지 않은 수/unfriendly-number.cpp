#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, count=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2==0)
        {
            count++;
            continue;
        }
        if(i%3==0)
        {
            count++;
            continue;
        }
        if(i%5==0)
        {
            count++;
            continue;
        }
    }

    cout<<n-count;


    return 0;
}