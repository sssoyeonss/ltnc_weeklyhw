#include<iostream>
using namespace std;

signed main(){
    for(int i = 0; i <= 23; i++){
        if(i == 0){
            cout << "12 midnight\n";
        }
        if(i >= 1 && i <= 11){
            cout << i << "am\n";
        }
        if(i == 12){
            cout << "12 noon\n";
        }
        if(i > 12 && i <= 23){
            cout << i - 12 << "pm\n";
        }
    }
}
