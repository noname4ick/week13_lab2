#include <iostream>

using namespace std;

int maxValue(int* ptrs[], int size) {
    int maxVal = **ptrs;
    for (int i=0;i<size;i++) {
        if (maxVal < **ptrs) {
            maxVal = **ptrs;
        }
        (ptrs)++;
    }
    return maxVal;
}

int main() {
    int a = 1, b= 2, c = 3, d= 4, e = 5;
    int *arr[5] = {&a, &b, &c, &d, &e};
    for(int i=0;i<5;i++) {
        cout<<*arr[i]<<" ";
    }
    cout<<endl;
    cout<<maxValue(arr, 5);
    return 0;
}