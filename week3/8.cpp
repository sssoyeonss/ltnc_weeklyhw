#include<iostream>
#define int long long
using namespace std;
int a[100000];

void swap(int x, int y){
    int tmp = a[x]; a[x] = a[y]; a[y] = tmp;
}

void bubbleSort(int n, int a[]){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(j, j + 1);
            }
        }
    }
}

signed main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bubbleSort(n, a);
    int sum = 0, ans = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        ans += sum;
    }
    cout << ans;
}
