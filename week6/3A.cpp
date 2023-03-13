#include <iostream>
using namespace std;

struct Point{
    double x; double y;
};

Point mid_point(const Point& a, const Point& b){
    Point res;
    cout << &a << ' ' << &b << '\n';
    res.x = (a.x + b.x) / 2;
    res.y = (a.y + b.y) / 2;
    return res;
}

signed main(){
    Point a, b; a.x = 2; a.y = 4; b.x = 10; b.y = 18; cout << &a << ' ' << &b << '\n';
    Point m = mid_point(a, b);
    cout << "(" << m.x << ", " << m.y << ")";
}
