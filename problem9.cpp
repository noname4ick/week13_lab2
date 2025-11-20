#include <iostream>
using namespace std;

double square(double x) {
    return x*x;
}

double cube(double x) {
    return x*x*x;
}

double apply(double x,double (*f)(double)) {
    return f(x);
}

int main() {
    double (*funs[2])(double) = {square,cube};
    double x;
    cin>>x;
    cout<<apply(x,*funs)<<" ";
    cout<<apply(x,*(funs+1));

    return 0;
}