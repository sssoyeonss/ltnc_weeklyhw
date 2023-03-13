#include <iostream>
using namespace std;

struct Point{
    double x; double y;
};

void print(Point a){
    cout << &a << '\n';
    cout << "(" << a.x << ", " << a.y << ")" << '\n';
}

void print1(Point& a){
    cout << &a << '\n';
    cout << "(" << a.x << ", " << a.y << ")" << '\n';
}

signed main(){
    Point s;
    s.x = 1; s.y = 2; Point* p = &s;
    cout << &s << '\n';
    cout << "(" << s.x << ", " << s.y << ")" << '\n';
    print(s); print1(s);
}
/*output
0x61fe00 ->s
(1, 2)
0x61fda0 ->tham tri
(1, 2)
0x61fe00 -> tham chieu
(1, 2)
*/
