#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int a=1;
    for(int b=1;b<=2;b++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}