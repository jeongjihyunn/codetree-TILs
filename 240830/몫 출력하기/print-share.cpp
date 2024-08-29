#include <iostream>
using namespace std;

int main() {
    int a;
    int cnt=0;
    while(1){
        cin >>a;
        if(a%2==1){
            continue;
        }
        cout<<a/2<<endl;
        cnt++;

        if(cnt>=3){
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}