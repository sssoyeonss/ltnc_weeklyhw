#include<iostream>
using namespace std;
bool ck[100000];
int a[100000], ele[100000];
int per[10000], n, k;

void print(int pos){
    for(int i = pos; i >= 1; i--){
        cout << a[i] << ' ';
    }
    cout << '\n';
}

void back(int n, int pos, int k){
    if(n == 0){
        print(pos - 1); return;
    }
    for(int i = k; i <= n; i++){
        a[pos] = i;
        back(n - i, pos + 1, i);
    }
}

signed main(){
    cin >> n >> k;   back(n, 1, 1);
    //print();
}
