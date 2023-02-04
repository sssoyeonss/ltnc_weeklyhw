#include<iostream>
using namespace std;

signed main(){
    string f0 = "a", f1 = "b";
    for(int i = 2; i <= 10; i++){
        string f = f1 + f0; f0 = f1; f1 = f;
        cout << f <<'\n';
    }
  }
