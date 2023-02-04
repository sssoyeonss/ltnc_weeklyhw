#include<iostream>
using namespace std;

signed main(){
    int n; double s = 0, mn, mx;
    cin >> n;
    for(int i = 1; i <= n; i++){
        double x; cin >> x; s += x;
        if(i == 1){
            mn = x; mx = x;
        }
        else{
            if(mn > x) mn = x;
            if(mx < x) mx = x;
        }
    }
    double me = s/n;
    cout << "Mean: " << me << '\n'; cout << "Max: " << mx << '\n';
    cout << "Min: " << mn << '\n';

}
