#include<iostream>
using namespace std;

void MaxWithoutIf(int a, int b){
    int r = ((a + b) + abs(a - b)) / 2; cout << r;
}

signed main(){
    int a, b; cin >> a >> b;
    MaxWithoutIf(a, b);
}
