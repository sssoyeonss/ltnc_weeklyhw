#include<iostream>
using namespace std;
int n, row[1000];
char a[1000][1000];

void print(int row[]){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == row[i]){
                cout << '*';
            }
            else{
                cout << '.';
            }
        }
        cout << '\n';
    }
    cout << '\n';
}

bool safe(int r, int c, int n, int row[]){
    for(int i = 1; i < r; i++){
        if(row[i] == c){
            return 0;
        }
    }

    int k = r - 1, l = c + 1;
    while(k >= 1 && l <= n){
        if(row[k] == l){
            return 0;
        }
        k--; l++;
    }
    k = r - 1, l = c - 1;
    while(k >= 1 && l >= 1){
        if(row[k] == l){
            return 0;
        }
        k--; l--;
    }
    return 1;
}

void back(int r, int it, int n, int row[]){
    if(it == 0){
        print(row);
        return;
    }
    int c;
    for(c = 1; c <= n; c++){
        if(safe(r, c, n, row)){
            row[r] = c;
            back(r + 1, it - 1, n, row);
            row[r] = 0;
        }
    }
   // return 0;
}

signed main(){
    cin >> n;
    back(1, n, n, row);

}
