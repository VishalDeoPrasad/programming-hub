#include <iostream>
using namespace std;
void arrayReverse(int arr[], int n){
    int i=0, j=n-1;
    int temp;
    while (i<=j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++, j--;
    }
}

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


int main(){
    int arr[11] = {-3,4,2,8,7,9,6,2,10,10,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    arrayReverse(arr, n);
    printArray(arr, n);
    return 0;
}

