#include <iostream>

using namespace std;

int add(int a, int b) {
    return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mul(int a,int b) {
    return a*b;
}

int main() {
    int (*fun_ptrs[3])(int,int) = {add, sub, mul};
    int a,b,i;
    cout <<"Enter 3 numbers: "<<endl;
    cout << "First two is data"<<endl;
    cout <<"3rd is index of operation 0 - addition, 1 - subtraction, 2 - multiplication"<<endl;
    cin>>a>>b>>i;

    cout<<fun_ptrs[i](a,b)<<endl;
    return 0;
}