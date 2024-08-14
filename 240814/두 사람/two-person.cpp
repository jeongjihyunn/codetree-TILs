#include <iostream>
using namespace std;

int main() {
    int a,c;
    string b,d;
    cin >>a>>b;
    cin.get();
    cin >>c>>d;

    if((b=="M"&&a>=19)||(d=="M"&&c>=19)){
        cout<<1;
    }
    else{
        cout<<0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}