#include <iostream>
using namespace std;

int main() {
    int cnt1=0,cnt2=0;
    for(int i=1;i<=10;i++){
        int a;
        cin >>a;
        cin.get();
        if(a%3==0){
            cnt1++;
        }
        if(a%5==0){
            cnt2++;
        }
    }
    cout<<cnt1<<" "<<cnt2;
    // 여기에 코드를 작성해주세요.
    return 0;
}