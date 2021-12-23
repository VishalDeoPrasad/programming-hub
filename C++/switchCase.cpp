#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;
    switch (age){
        case 13:
            cout<<"You are 13 Year old";
            break;
        case 18:
            cout<<"You are 18 Year Old";
            break;
        default:
            cout<<"Your age is different";
            break;
    }
}