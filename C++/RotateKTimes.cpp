#include <iostream>
using namespace std;

void printArray(int ar[]){
    for (int i=0; i<7; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int reverseArray(int arr[], int s, ent e){
    int i=s, j=e-1, temp;
    while (i<=j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++, j--;
    }
    return (arr);
}

int main(){
    int arr[7] = {2,87,9,4,5,5,6};
    int k = 4;
    printArray(arr);
    arr = reverseArray(arr, 0, 7);
    printArray(arr);
    int i=0, j=k-1, temp=0;
    while (i<=j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++, j--;
    }
    printArray(arr);
    
    i=k, j=7-1, temp=0;
    while (i<=j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++, j--;
    }
    printArray(arr);

    
}