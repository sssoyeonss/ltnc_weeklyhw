#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int ranNum(int n){
    int res = rand() % (n - 1);
    return res;
}

signed main(){
    cout << ranNum(5);
}
