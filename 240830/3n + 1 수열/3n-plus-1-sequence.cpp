#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int cnt=0;
    while(1){
        if(n==1){
            break;
        }
        else if(n%2==0){
            cnt++;
            n/=2;
        }
        else{
            cnt++;
            n=n*3+1;
        }

    }
    cout<<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}