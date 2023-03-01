#include<iostream>
#include<math.h>

using namespace std;

bool prime(int x){
    if(x <= 1) return 0;
    if(x == 2 || x == 3) return 1;
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            return 0;
        }
    }
    return 1;
}

void f(int a){
    for(int i = 1; i <= a; i++){
        if(prime(i)){
            cout << i << ' ';
        }
    }
}
signed main(){
    f(10);
}
