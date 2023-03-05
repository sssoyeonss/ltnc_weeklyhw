#include<iostream>
using namespace std;
bool ck[100000];
int a[100000], ele[100000];
int per[10000], n, k;

void print(){
    for(int i = 0; i < k; i++){
        cout << char(per[i] + 97);
    }
    cout << '\n';
}

bool check(int n, int k){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1) cnt++;
    }
    if(cnt != k){
        return 0;
    }
    int it = 0;
    for(int i = 0; i < n; i++){
        if(a[i]){
            ele[it] = i; it++;
        }
    }
    return 1;
}

void back_permu(int k, int pos){
    if(pos == k){
        print(); return;
    }
    for(int i = 0; i < k; i++){
        if(!ck[i]){
            per[pos] = ele[i];
            ck[i] = 1;
            back_permu(k, pos + 1);
            ck[i] = 0;
        }
    }
}

void back_sub(int n, int k, int pos){
    if(pos == n){
        if(check(n, k)){
            back_permu(k, 0);
        }
        return;
    }
    a[pos] = 1;
    back_sub(n, k, pos + 1);
    a[pos] = 0;
    back_sub(n, k, pos + 1);
}

signed main(){
    cin >> n >> k;   back_sub(n, k, 0);
    //print();
}
