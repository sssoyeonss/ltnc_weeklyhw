#include<iostream>
#include<math.h>
using namespace std;

signed main(){
    double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    double r = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    r = sqrt(r);
    cout << r;
}
