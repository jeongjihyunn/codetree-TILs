#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int prod=1;
    for(int i=1;i<=10;i++){
        prod*=i;
        if(n<=prod){
            cout<<i;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}