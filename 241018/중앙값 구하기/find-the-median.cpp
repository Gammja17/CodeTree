#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b,c;
    cin>>a>>b>>c;

    if(a<b){
        if(b<c) cout<<b;
        else if(c<b)
            {if(c<a) cout<<a;
            else if(c>a) cout<<c;
            }

        }

    if(b<a){
        if(c<b) cout<<b;
        else if(b<c)
            {if(c<a) cout<<c;
            else if(c>a) cout<<a;
            }

        }
    return 0;
}