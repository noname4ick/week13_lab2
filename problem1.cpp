#include <iostream>

using namespace std;

int add(int a,int b){
return a+b;}

int main() {
    int (*funcptr)(int, int) = add;

int a,b;
cin>>a>>b;
cout<<funcptr(a,b);
return 0;
}