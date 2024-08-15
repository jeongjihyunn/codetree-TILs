#include <iostream>
using namespace std;

int main() {
    int m;
    cin >>m;
    if(((m<=7)&&(m%2==1))||((m>=8)&&(m%2==0))){
        cout<<31;
    }
    else{
        if(m==2){
            cout<<28;
        }
        else{
            cout<<30;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}