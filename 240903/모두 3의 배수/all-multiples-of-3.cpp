#include <iostream>
using namespace std;

int main() {
    bool satisfied=true;

    for (int i=1;i<=5;i++){
        int n;
        cin >>n;
        if(n%3!=0){
            satisfied=false;
        }
    }
    if(satisfied==true){
        cout<<1;
    }
    else{
        cout<<0;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}