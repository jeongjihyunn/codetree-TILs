#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >>a>>b>>c;
    if(b>c&&a==c){
        cout<<1<<" ";
    }
    else if(b<c&&a==b){
        cout<<1<<" ";
    }
    else if(a==b&&b==c&&c==a){
        cout<<1<<" ";
    }
    else{
        cout<<0<<" ";
    }
    
    if(a==b&&b==c&&c==a){
        cout<<1;
    }
    else{
        cout<<0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}