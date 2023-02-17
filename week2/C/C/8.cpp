#include <iostream>
#include<string.h>
using namespace std;
char s[1000002];
long n, bl = 0, cur = 1, dup = 0, aba = 0;

signed main() {
    cin >> s; n = strlen(s);
    for(long i = 1; i < n; i++){
        if(s[i] == s[i - 1]){
            cur++;
        }
        else{
            if(cur >= 2){
                dup++;
            }
            bl++;
            cur = 1;
        }
        if(i > 1){
            if(s[i] == s[i - 2] && s[i] != s[i - 1]){
                aba++;
            }
        }
    }
    bl++;
    if(cur >= 2){
        dup++;
    }
    //cout << bl << ' ' << dup << ' ' << aba << ' ';
    long res = (bl * (bl - 1)) / 2;
    res += dup;
    res -= aba;
    cout << res;
}
