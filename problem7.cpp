#include <iostream>
using namespace std;

double square(double x) {
    return x*x;
}

double cube(double x) {
    return x*x*x;
}

int main() {
    double (*ptrs[2])(double) = {square, cube};
    double x;
    cin>>x;
    for(int i=0;i<2;i++) {
        cout<<ptrs[i](x)<<" ";
    }

    return 0;
}