#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >>a>>b>>c;
    if(a>=b&&b>=c){
        cout<<a;
    }
    else if(b>=c&&b>=a){
        cout<<b;
    }
    else if(c>=a&&c>=b){
        cout<<c;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}