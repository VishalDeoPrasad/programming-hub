#include <iostream>
using namespace std;

int main(){
    /*int idx = 0;
    while (idx<10){
        cout<<idx;
        idx++;
    }*/
    for (int i=0; i<10; i++){
        for (int j=i; j<10; j++){
            cout<<i<<j<<" ";    
        }
        cout<<endl;
        
    }
} 