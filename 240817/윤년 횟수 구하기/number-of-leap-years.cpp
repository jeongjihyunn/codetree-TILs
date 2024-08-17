#include <iostream>
using namespace std;

int main() {
    int n,cnt1=0,cnt2=0;
    cin >>n;

    for(int i=1;i<=n;i++){
        if(i%400==0){
            cnt1++;
        }
        else if(i%100==0){
            cnt2++;
        }
        else if(i%4==0){
            cnt1++;
        }
    }
    cout<<cnt1;
    // 여기에 코드를 작성해주세요.
    return 0;
}