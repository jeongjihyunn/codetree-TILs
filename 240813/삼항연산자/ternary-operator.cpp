#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int score = n == 100 ? 0 : 1;
    if(score == 0){
    cout<<"pass"; 
    }
    else{
        cout<<"failure";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}