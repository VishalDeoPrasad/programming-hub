#include <iostream>
using namespace std;
int swapNumber(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<b<<endl;
    return a,b;
}

int main(){
    int arr[7] = {-3,4,2,8,7,9,6};

    int i=0, j=7-1;
    while (i<=j){
        arr[i], arr[j] = swapNumber(arr[i], arr[j]);
        i++, j--;
    }

    for (int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

