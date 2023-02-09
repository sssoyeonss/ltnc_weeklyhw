#include <iostream>
using namespace std;

bool leapYear(int x){
    if(x % 400 == 0){
        return 1;
    }
    if(x % 4 == 0 && x % 100 != 0){
        return 1;
    }
    return 0;
}
signed main(){
    int x; cin >> x;
    if(leapYear(x)){
        cout << "true";
    }
    else{
        cout << "false";
    }
}
