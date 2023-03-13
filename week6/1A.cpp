#include<iostream>
using namespace std;

struct Point{
    double x, y;
};

void print(Point v){
    cout << '(' << v.x << ", " << v.y << ')';
}
signed main(){
    double x, y; cin >> x >> y; Point f; f.x = x; f.y = y; print(f);
}
