#include<iostream>
using namespace std;
int a[6] = {1, 2, 3, 4, 5, 6};

void f1(int (&x)[6]){
    cout << sizeof(x) << ' ';
}

void f2(int b[]){
    cout << sizeof(b) << ' ';
}

void f3(int c[6]){
    cout << sizeof(c) << ' ';
}

signed main()
{
    f1(a); f2(a); f3(a); cout << sizeof(a);
}
