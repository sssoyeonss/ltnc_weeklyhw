#include<iostream>
using namespace std;
int a[5];

void Ordered(){
    bool b = 0;
    if(((a[1] <= a[2]) && (a[2] <= a[3])) || ((a[1] >= a[2]) && (a[2] >= a[3]))){
        b = 1;
    }
    cout << b;
}

signed main(){
    for(int i = 1; i <= 3; i++){
        cin >> a[i];
    }
    Ordered();
}
