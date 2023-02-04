#include<iostream>
using namespace std;

signed main(){
    while(true){
        int n; cin >> n;
        if(n == -1){
            cout << "Bye"; break;
        }
        int ans = (n % 5 == 0) ? n/5 : -1;
        cout << ans << '\n';

    }
}
