#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age:";
    cin>>age;

    if (age>150 || age<1){
        cout<<"invalid age";
    }
    else if (age >18){
        cout<<"You can Vote";
    }
    else{
        cout<<"You Can not Vote";
    }
    return 0;
}