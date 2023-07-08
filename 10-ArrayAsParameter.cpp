#include<iostream>
using namespace std;


void print (int arr[], int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<endl;
    }
 }
int *rtrnArray(int n) {
    int *p;
    p = new int[n];
    for (int i = 0; i<n; i++) {
        p[i] = i+1;
    }
    return p;
}
 int main() {
    int arr[5] = {1,2,3,4,5};
    cout<<"Printing the Array"<<endl;
    print(arr,5);
    cout<<"Returning the Array"<<endl;
    int *ptr;
    ptr = rtrnArray(5);
    for (int i = 0; i<5; i++) {
        cout<<ptr[i]<<endl;
    }
    return 0;
 }