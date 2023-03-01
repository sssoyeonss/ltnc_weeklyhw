#include<iostream>

using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b% a, a);
}

bool check(int a, int b){
    if(gcd(a, b) == 1){
        return 1;
    }
    return 0;
}
signed main(){
    int a, b; cin >> a >> b;
    cout << check(a, b);
}
