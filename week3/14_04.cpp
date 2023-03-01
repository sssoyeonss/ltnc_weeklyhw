#include<iostream>
using namespace std;
int a[1000], b[1000], n;

void insertionSort(int x[], int n_){
    for(int i = 2; i <= n_; i++){
        int j = i - 1; int tmp = x[i];
        while(x[j] > tmp && j > 0){
            x[j + 1] = x[j]; j--;
        }
        x[j + 1] = tmp;
    }
}

signed main(){
    cin >> n; int sa = 0, sb = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i]; sa += a[i];
    }
    for(int i = 1; i <= n + 1; i++){
        cin >> b[i]; sb += b[i];
    }
    cout << sb - sa;
}
