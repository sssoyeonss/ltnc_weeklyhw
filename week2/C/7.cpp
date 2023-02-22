#include <iostream>
#define int long long
using namespace std;

signed main() {
    int n, id = 0, prev;
    while(true){
        cin >> n;
        if(id == 0){
            cout << n << ' '; prev = n;
            id++;
        }
        else{
            if(n != prev){
                cout << n << ' ';
            }
            prev = n;
        }
        if(n < 0){
            break;
        }
    }
}
