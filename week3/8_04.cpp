#include<iostream>
using namespace std;
double a[10001], b[10001], y[10001];
int n;

void mergeSort(double x[], int l, int r){
    if(r - l == 1){
        if(x[r] < x[l]){
            double tmp = x[l]; x[l] = x[r]; x[r] = tmp;
        }
        //cout << x[l] << ' ' << x[r] << '\n';
        return;
    }
    if(l == r) return;
    int mid = (l + r) / 2; //cout << l << ' ' << r << ' ' << mid; cout << '\n';
    mergeSort(x, l, mid);
    mergeSort(x, mid + 1, r);
    /*for(int i = 1; i <= n; i++){
        cout << x[i] << ' ';
    }*/
    int k1 = l, k2 = mid + 1, id = l;
    while(k1 <= mid && k2 <= r){
        if(x[k1] <= x[k2]){
            y[id] = x[k1]; id++; k1++;
        }
        else{
            y[id] = x[k2]; id++; k2++;
        }
    }
    while(k1 <= mid){
        y[id] = x[k1]; k1++; id++;
    }
    while(k2 <= r){
        y[id] = x[k2]; k2++; id++;
    }
    for(int i = l; i <= r; i++){
        x[i] = y[i];
    }
}

signed main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
    }
    mergeSort(a, 1, n);
    mergeSort(b, 1, n); bool ok  =1 ;
    for(int i = 1; i <= n; i++){
        if(a[i] <= b[i]){
            cout << "No"; ok = 0; break;
        }
    }
    if(ok) cout << "Yes";
}
