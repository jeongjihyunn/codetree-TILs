#include <iostream>
using namespace std;

int main() {
    int a;
    while(true){
        cin >>a;
        if(a==1){
            cout<<"John"<<endl;
        }
        else if(a==2){
            cout<<"Tom"<<endl;
        }
        else if(a==3){
            cout<<"Paul"<<endl;
        }
        else if(a==4){
            cout<<"Sam"<<endl;
        }
        else{
            cout<<"Vacancy";
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}