#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int now = 1;

int gen(){
    int res = rand() % 6 + 1;
    return res;
}

void playA(int now){
    srand(time(NULL)); int s1 = 0; int s2 = 0;
    while(true){
        int val = gen();
        if(now & 1){
            s1 += val;
            cout << "xuc xac nguoi choi 1: " << val << '\t' << "Tong nguoi 1: " << s1 << '\n';
        }
        else{
            s2 += val;
            cout << "xuc xac nguoi choi 2: " << val << '\t' << "Tong nguoi 2: " << s2 << '\n';
        }
        if(s1 >= 100 || s2 >= 100){
            if(s1 >= 100){
                cout << "Nguoi 1 thang\n";
            }
            else cout << "Nguoi 2 thang\n";
            break;
        }
        now++;
    }
}

void playB(){
    srand(time(NULL));
    int s1 = 0; int s2 = 0;
    while(true){
        int val = gen();
        if(s2 < s1){
            s2 += val;
            cout << "xuc xac nguoi choi 2: " << val << '\t' << "Tong nguoi 2: " << s2 << '\n';
        }
        else{
            s1 += val;
            cout << "xuc xac nguoi choi 1: " << val << '\t' << "Tong nguoi 1: " << s1 << '\n';
        }
        if(s1 >= 100){
            cout << "Nguoi 1 thang\n"; break;
        }
        else if(s2 >= 100){
            cout << "Nguoi 2 thang\n"; break;
        }
    }
}

signed main(){
    playA(1); cout << '\n'; playB();
}
