#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;

    for(int i=n-1;i>=0;i--){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
        }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}