#include <iostream>
using namespace std;

int main() {
    cout <<fixed;
    int sum =0,cnt=0;
    for(int i=1;i<=10;i++){
        int n;
        cin >>n;
        cin.get();
        if(n>=0&&n<=200){
            sum +=n;
            cnt++;
        }
    }
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}