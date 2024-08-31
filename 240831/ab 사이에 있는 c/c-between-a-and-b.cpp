#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >>a>>b>>c;
    for(int i=1;i<=100;i++){
        c=c*i;
        if(c>=a&&c<=b){
            cout<<"YES";
            break;
        }
        else{
            continue;
        }
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}