#include<iostream>
#include<math.h>

using namespace std;

void print(int m, int n){
    for(int i = 1; i <= m; i++){
        cout << ' ';
    }
    for(int i = 1; i <= n; i++){
        cout << '*';
    }
    for(int i = 1; i <= m; i++){
        cout << ' ';
    }
}

signed main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        print(n - i, i * 2 - 1); cout << '\n';
    }
}
