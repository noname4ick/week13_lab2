#include <iostream>
using namespace std;

double average(double *ptrs[],int size) {
    double average = 0;
    for(int i=0;i<size;i++) {
        average+=**ptrs;
        ptrs++;
    }
    return average/size;
}

int main() {
    double b= 2.0, c = 4.0, d= 6.0, e = 8.0;
    double *arr[4] = {&b, &c, &d, &e};
    for(int i=0;i<4;i++) {
        cout<<*arr[i]<<" ";
    }
    cout<<endl;
    cout<<average(arr, 4);
    return 0;
}