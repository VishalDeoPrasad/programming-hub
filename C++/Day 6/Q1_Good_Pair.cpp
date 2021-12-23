#include <iostream>
using namespace std;

int main(){
    int A[4] = {1,2,3,4};
    int B = 8;

    for (int i=0; i<4; i++){
        for (int j=i+1; j<4; j++){
            if (A[i] + A[j] == B){
                cout<<1;
                return 1;
            }
        }
    }
    cout<<0;
    return 0;
}

