#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int arr[8] = {2,4,6,8,10,12};
    cout<<"Size is: "<<sizeof(arr)<<endl;
    cout<<"unspace: "<<arr[6]<<ends<<" "<<arr[7]<<endl;
    for (int i = 0; i<6; i++) {
        cout<<arr[i]<<endl;
    }

    cout<<"Printing values using forEach loop"<<endl;
    for (int num: arr) {
        cout<<num<<endl;
    }
    return 0;
}