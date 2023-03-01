#include<iostream>
#include<math.h>

using namespace std;

int rnd1(double x){
    double f = x - floor(x);
    if(f < 0.5) return floor(x);
    else return ceil(x);
}

int rnd2(double x){
    int d = x;
    double f = x - (double)d;
    if(f < 0.5) return d;
    else return d + 1;
}

signed main(){
    double n; cin >> n;
    cout << rnd1(n) << ' ' << rnd2(n);
}
