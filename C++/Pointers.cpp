#include <iostream>
#include <String>

using namespace std;

int main(){
    int a = 34;
    int *ptra;
    ptra = &a;
    cout<<ptra<<endl;
    cout<<*ptra<<endl;
    cout<<&a;
}