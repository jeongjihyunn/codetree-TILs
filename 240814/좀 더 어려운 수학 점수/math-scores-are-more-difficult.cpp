#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    if((a>c)||(a==c)&&(b>d)){
        cout<<"A";
    }
    else if((a<c)||(a==c)&&(b<d)){
        cout<<"B";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}