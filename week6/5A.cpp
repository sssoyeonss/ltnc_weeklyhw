#include <iostream>
using namespace std;
int aa[4] = {1, 2, 3, 4};

struct Point{
    int x; int y;
};

struct Line{
    Point a; Point b;
};

void print(Point a){
    cout << '(' << a.x << ' ' << a.y << ')' << '\n';
}

struct Ar{
    int n; int ar[4];
};

signed main()
{
    Ar a;
    a.n = 5;
    for(int i = 0; i < 4; i++){
        a.ar[i] = aa[i];
    }
    Ar b = a;
    cout << b.n << '\n';
    for(int i = 0; i < 4; i++){
        cout << b.ar[i] << ' ';
    }
    cout << '\n';
    Point p; p.x = 1; p.y = 1;
    Point q; q.x = 2; q.y = 2;
    Line pq; pq.a = p; pq.b = q;
    Line pq_ = pq;
    print(pq.a); print(pq.b);
    // => copy the same value in both case
}
