#include <iostream>
using namespace std;

int main(){
    /*int arr[3] = {2, 8, 9};
    cout<<arr[2];*/

    /*int marks[6];
    for (int i=0; i<6; i++){
        cout<<"Enter the marks of "<<i+1<<"th student: ";
        cin>>marks[i];
    }
    for (int i=0; i<6; i++){
        cout<<"Marks of "<<i+1<<"th student = "<<marks[i]<<endl;  
    } 
    cout<<marks; */
    int arr2D[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout<<arr2D[i][j];
        }
    }
    
}