#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int cnt=1;
    for (int i=1;i<=n;i++){
        cnt++;
        n /= i;
        if(n/i<=1){
            cout<<cnt;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}