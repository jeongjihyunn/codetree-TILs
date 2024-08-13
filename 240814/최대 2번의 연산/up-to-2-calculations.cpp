#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if(a%2==0){
        a/=2;
        //cout<<a/2;
    }

    if(a%2==1){
        cout<<(a+1)/2;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}