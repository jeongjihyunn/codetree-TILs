#include <iostream>
using namespace std;

int main() {
    double number;
    cin >> number;
    if(number>=1.0){
        cout << "High";
    }
    else if(number>=0.5){
        cout << "Middle";
    }
    else {
        cout << "Low";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}