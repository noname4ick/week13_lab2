#include <iostream>
using namespace std;

int isEven(int x) {
    if (x % 2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int x = 5,count = 0;
    int arr[5] = {1,2,3,4,5};
    int (*funcs[5])(int) = {isEven,isEven,isEven,isEven,isEven};
    for(int i=0;i<x;i++) {
        cin>>arr[i];
        if (funcs[i](arr[i]))
            count++;
    }
    cout<<count;
    return 0;
}