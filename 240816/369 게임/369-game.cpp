#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;

    for(int i=1;i<=n;i++){
        if(i%3==0){
            cout<<0<<" ";
        }
        else if((i>=30&&i<40)||(i>=60&&i<70)||(i>=90&&i<100)){
            cout<<0<<" ";
        }
        else if(i==13||i==23||i==43||i==53||i==73||i==83){
            cout<<0<<" ";
        }
        else if(i==16||i==26||i==46||i==56||i==76||i==86){
            cout<<0<<" ";
        }
        else if(i==19||i==29||i==49||i==59||i==79||i==89){
            cout<<0<<" ";
        }
        else{
            cout<<i<<" ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}