#include <iostream>
using namespace std;

int main() {
    int x,y,temp,a;
    cin>>a;
    cin.get();
    cin >>x;
    cin.get();
    cin >>y;
    temp=x;
    x=y;
    y=temp;
    cout<<"010"<<"-"<<x<<"-"<<y;
    // 여기에 코드를 작성해주세요.
    return 0;
}