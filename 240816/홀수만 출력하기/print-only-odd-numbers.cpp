#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin >>a;
        cin.get();
        if(a%3==0&&a%2==1){
            cout<<a<<endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}