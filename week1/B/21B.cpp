#include<iostream>
#include<math.h>
using namespace std;

signed main(){
    double a, b, c; cin >> a >> b >> c;
    double s = (a + b + c)/2;
    double res = s * (s - a) * (s - b) * (s - c);
    res = sqrt(res);
    cout << res;
}
