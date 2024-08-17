#include <iostream>
using namespace std;

int main() {
    cout <<fixed;
    int n;
    int sum=0,cnt=0;
    cin >>n;
    for(int i=1;i<=n;i++){
        int a;
        cin >>a;
        cin.get();
        cnt++;
        sum+=a;
    }
    cout.precision(1);
    cout <<sum<<" "<<(double)sum/cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}