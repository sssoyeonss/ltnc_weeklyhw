#include <iostream>
using namespace std;

struct Point{
    double x; double y;
};

void printAdd(Point& s){
    cout << &s << ' ' << (&s.x) << ' ' << (&s.y);
}
signed main(){
    Point a; a.x = 1; a.y = 2; printAdd(a);
}
//Struct su dung cac o nho lien nhau de luu cac truong cua no
