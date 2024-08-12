#include <iostream>
using namespace std;

int main() {
    cout<<fixed;
    double a=30.48;
    float b=160934;
    double c=9.2;
    double d=1.3;

    cout.precision(1);
    cout<<c<<"ft"<<" = "<<c*a<<"cm"<<endl;
    cout<<d<<"mi"<<" = "<<d*b<<"cm";
    // 여기에 코드를 작성해주세요.
    return 0;
}