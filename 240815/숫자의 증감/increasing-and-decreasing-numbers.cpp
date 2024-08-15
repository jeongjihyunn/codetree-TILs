#include <iostream>
using namespace std;

int main() {
    string c;
    int n;
    cin>>c>>n;
    if(c=="A"){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
    }
    else if(c=="D"){
        for(int n;n>=1;n--){
            cout<<n<<" ";
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}