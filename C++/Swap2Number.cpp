#include <iostream>
using namespace std;
void swapNumber(int a, int b){
    int temp;
    cout<<"Before Swap : "<<a<<", "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"After Swap : "<<a<<", "<<b<<endl;
}


int main(){
    swapNumber(5, 10);
}