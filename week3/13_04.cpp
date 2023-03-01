#include<iostream>
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 4], pref[n + 4];
        pref[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }
        pref[n + 1] = pref[n]; bool ck = 0;
        for(int i = 1; i <= n; i++){
            int l = pref[i - 1] - pref[0]; int r = pref[n] - pref[i];
            if(l == r){
                ck = 1; break;
            }
        }
        if(ck){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
