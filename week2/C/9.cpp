#include <iostream>
#define int long long
using namespace std;

signed main() {
    int n, a, b, mx, my; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        if(i == 1){
            mx = a; my = b;
        }
        else{
            if(mx > a) mx = a;
            if(my > b) my = b;
        }
    }
    cout << mx * my;
}
