#include <iostream>
using namespace std;

int main() {
    string a1,b1,c1;
    int a2,b2,c2;
    cin >>a1>>a2;
    cin.get();
    cin >>b1>>b2;
    cin.get();
    cin >>c1>>c2;
    
    if(a1=="Y"&&a2>=37){
      if(b1=="Y"&&b2>=37){
        cout<<"E";
      }
      else if(c1=="Y"&&c2>=37){
        cout<<"E";
      }
    }
    else if(b1=="Y"&&b2>=37){
        if(c1=="Y"&&c2>=37){
            cout<<"E";
        }
    }
    else{
        cout<<"N";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}