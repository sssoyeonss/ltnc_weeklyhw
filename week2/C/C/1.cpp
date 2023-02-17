#include<iostream>
#include<math.h>
using namespace std;

bool prime(int n){
    if(n < 2) return 0;
    if(n == 2 || n == 3) return 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

signed main(){
    int n; cin >> n;
    if(prime(n)){
        cout << "yes";
    }
    else{
        cout << "no";
    }
}
