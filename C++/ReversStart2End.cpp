#include <iostream>
using namespace std;

int main(){
    int arr[8] = {2,9,7,4,8,5,3,4};
    int temp;
    int s=2, e=5;
    while (s<=e){
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++, e--;
    }

    for (int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
}