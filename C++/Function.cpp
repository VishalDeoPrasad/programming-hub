#include <iostream>
using namespace std;

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    cout<<"Addition = "<<add(a,b);
}