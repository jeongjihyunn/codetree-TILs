#include <iostream>
using namespace std;

int main() {
    int y;
    cin >>y;
    if((y%4==0)&&(y%100!=0)){
       cout<<"true";
    }
    else if(y%400!=0){
        cout<<"false";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}