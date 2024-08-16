#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >>a>>b;
    while(a<=b){
        if(a%2==1){
            cout<<a<<" ";
            a*=2;
        }
        else{
            cout<<a<<" ";
            a+=3;
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}