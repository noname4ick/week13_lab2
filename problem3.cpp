#include <iostream>

using namespace std;


void reverseArray(int* ptr[], int size) {
    int **start = ptr;
    int **end = ptr + size-1;
    while(start < end) {
        int temp = **start;
        **start = **end;
        **end = temp;
        start++;
        end--;
    }
}

int main() {
    int a = 1, b= 2, c = 3, d= 4, e = 5;
    int *arr[5] = {&a, &b, &c, &d, &e};
    for(int i=0;i<5;i++) {
        cout<<*arr[i]<<" ";
    }
    reverseArray(arr,5);
    cout<<endl;
    for (int i=0;i<5;i++) {
        cout<<*arr[i]<<" ";
    }
    return 0;
}