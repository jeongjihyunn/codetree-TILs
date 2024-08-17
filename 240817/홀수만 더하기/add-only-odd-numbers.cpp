#include <iostream>
using namespace std;

int main() {
    int n=0;
    int sum=0;
    cin >>n;
    for(int i;i<=n;i++){
        int a;
        cin >>a;
        if(a%2==1&&a%3==0){
            sum+=a;
        }
    }
    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}