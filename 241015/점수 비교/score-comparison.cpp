#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int aMath, aEng, bMath, bEng;
    cin >> aMath >> aEng >> bMath >> bEng;

    if(aMath>bMath && aEng>bEng) cout<<"1";
    else cout<<"0";

    return 0;
}