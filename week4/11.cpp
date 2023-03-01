#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int a[1000];

void changeToBin(int n){
    int tmp = n, id = 0;
    while(tmp){
        a[id] = tmp % 2;
        tmp /= 2;
        id++;
    }
    for(int i = id - 1; i >= 0; i--){
        cout << a[i];
    }
}

signed main(){
    changeToBin(5);
}
