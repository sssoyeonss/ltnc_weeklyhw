#include<iostream>
#include<string>
using namespace std;
string s[101];

bool check(string x, string y){
    for(int i = 0; i < x.length(); i++){
        if(x[i] != y[i]){
            return 0;
        }
    }
    return 1;
}

signed main(){
    int n; cin >> n; bool found = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        string p = "";
        for(int k = s[i].length() - 1; k >= 0; k--){
            p += s[i][k];
        }
        //cout << p << '\n';
        for(int j = 0; j < i; j++){
            if(s[i].length() != s[j].length()){
                continue;
            }
            //cout << s[i] << ' ' << s[j] << '\n';
            bool ok = 1;
            for(int k = 0; k < s[i].length(); k++){
                if(p[k] != s[j][k]){
                    ok = 0; break;
                }
            }
            if(ok){
                cout << s[i].length() << ' ' << s[i][(s[i].length() - 1)/2]; break;
            }
        }
        if(found){
            break;
        }
    }
}
