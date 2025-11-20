#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int *ptr_arr[5];
    for (int i=0;i<5;i++) {
        ptr_arr[i] = &arr[i];
    }
    for (int i=4;i>=0;i--) {
        cout << *ptr_arr[i]<< " ";
    }
    return 0;
}