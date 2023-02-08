#include<iostream>
using namespace std;
int ad[15] = {2, 5, 5, 1, 3, 6, 1, 4, 0, 2, 5, 0};

signed main(){
    int dd, mm, yyyy; cin >> dd >> mm >> yyyy;
    int r = dd + (mm - 1) + 1;
    int rr = r % 7;
    switch(rr){
        case 0:{
            cout << "Saturday"; break;
        }
        case 1:{
            cout << "Sunday"; break;
        }
        case 2:{
            cout << "Monday"; break;
        }
        case 3:{
            cout << "Tuesday"; break;
        }
        case 4:{
            cout << "Wednesday"; break;
        }
        case 5:{
            cout << "Thursday"; break;
        }
        case 6:{
            cout << "Friday"; break;
        }
        case 7:{
            cout << "Saturday"; break;
        }
    }
}
