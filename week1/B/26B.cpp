#include <iostream>
using namespace std;
int a[10];

void swap(int i, int j){
    int c = a[i]; a[i] = a[j]; a[j] = c;
}

signed main(){
    for(int i = 1; i <= 5; i++){
        cin >> a[i];
    }
    //swap(1, 2);
    if(a[2] < a[1]){
        swap(1, 2);
    }
    if(a[3] < a[2]){
        swap(3, 2);
    }
    for(int i = 4; i <= 5; i++){
        int id = i;
        for(int j = 3; j >= 2; j--){
            if(a[id] < a[j]){
                swap(id, j); id = j;
            }
        }
    }
    /*for(int i = 1; i <=5; i++){
        cout << a[i] << ' ';
    }*/
    cout << a[3];
}
