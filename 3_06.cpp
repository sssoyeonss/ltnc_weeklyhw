#include<iostream>
using namespace std;
int a[100000], n, k;

void print(){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1) cnt++;
        //cout << a[i];
    }
   if(cnt == k){
        for(int i = 0; i < n; i++){
            if(a[i]){
                cout << char(i + 97);
            }
        }
        cout << '\n';
    }
}

void back(int n, int pos){
    if(pos == n){
        print(); return;
    }
    a[pos] = 1;
    back(n, pos + 1);
    a[pos] = 0;
    back(n, pos + 1);
}

signed main(){
    cin >> n >> k;
    back(n, 0);
}
