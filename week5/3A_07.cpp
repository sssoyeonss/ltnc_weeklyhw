#include<iostream>
using namespace std;

int count_even(int *a, int n)
{
    int res = 0;
    for(int i = 0; i < n; i++){
        if(*(a + i) % 2 == 0){
            res++;
        }
    }
    return res;
}

signed main()
{
    int a[6] = {1, 2, 3, 6, 8, 12}; cout << count_even(&a[0], 6);
}
