#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt=0;
    while(n<1000){
        cnt++;
        if(n%2==0){
            n=n*3+1;
        }
        else if(n%2==1){
            n=n*2+2;
        }
    }
    cout<<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}