#include <iostream>

using namespace std;

bool greaterThan10(int a){
    if (a > 10)
        return true;
    return false;
}

int main() {
    bool (*funcptr)(int) = greaterThan10;
    int size,count = 0;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
        if(greaterThan10(arr[i]))
            count++;
    }
    cout<<count;
    return 0;
}