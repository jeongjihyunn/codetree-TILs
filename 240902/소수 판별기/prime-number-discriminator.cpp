#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt=0;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }

    if(cnt==2){
        cout<<"P";
    }
    else{
        cout<<"C";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}