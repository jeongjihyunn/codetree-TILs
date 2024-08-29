#include <iostream>
using namespace std;

int main() {
    cout<<fixed;
    int a;
    int sum=0,cnt=0;
    while(1){
        cin >>a;
        if(a<20 || a>=30){
            break;
        }
        sum += a;
        cnt++;}
            cout.precision(2);
            cout<<(double)sum/cnt;
        
    
    // 여기에 코드를 작성해주세요.
    return 0;
}