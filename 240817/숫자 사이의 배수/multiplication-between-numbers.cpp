#include <iostream>
using namespace std;

int main() {
    cout<<fixed;
    int a,b;
    int sum=0, cnt=0;
    cin >>a>>b;
    for(int i=a;i<=b;i++){
        if(i%5==0||i%7==0){
            sum += i;
            cnt++;
        }
    }
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}