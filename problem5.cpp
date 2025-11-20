#include <iostream>

using namespace std;

void incrementOdd(int* ptrs[],int size) {
    for (int i = 0; i < size; i++) {
        if (**ptrs % 2 != 0) {
            (**ptrs)++;
        }
        ptrs++;
    }
}

int main() {
    int a = 1, b= 2, c = 3, d= 4, e = 5;
    int *arr[5] = {&a, &b, &c, &d, &e};
    for(int i=0;i<5;i++) {
        cout<<*arr[i]<<" ";
    }
    cout<<endl;
    incrementOdd(arr, 5);
    for(int i=0;i<5;i++) {
        cout<<*arr[i]<<" ";
    }
    return 0;
}