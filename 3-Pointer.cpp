#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle  {
    int length;
    int breadth;
};

int main() {
    cout<<"Pointer and Variavle"<<endl;
    int a = 10;
    int *p1;
    p1 = &a;
    cout<<"Address of a is: "<<p1<<endl<<"Value of a is: "<<*p1<<endl;

    cout<<"Pointer and Array"<<endl;
    int arr[5] = {1,2,3,4,5};
    int *p2;
    p2 = arr;
    for (int i = 0; i<5; i++) {
        cout<<p2[i]<<endl;
    }

    printf("Pointer and Heap memory using C\n");
    int *p3 = (int *)malloc(5*sizeof(int));
    p3[0] = 2; p3[1] = 4; p3[2] = 6; p3[3] = 8; p3[4] = 10;

    for (int i = 0; i<5; i++) {
        printf("%d \n", p3[i]);
    }
    
    cout<< "Pointer and Heap Memory using C++"<<endl;
    int *p4 =new int[5];
    p4[0] = 1; p4[1] = 3; p4[2] = 5; p4[3] = 7; p4[4] = 9;
    for (int i = 0; i<5; i++) {
        cout<<p4[i]<<endl;
    }

    //Deallocating Heap memery C
    free(p3);
    //Deallocating Heap memory C++
    delete [] p4;
    cout<<"Size of pointer for any data type"<<endl;

    int *p5;
    char *p6;
    float *p7;
    double *p8;
    struct Rectangle *p9;
    cout<<sizeof(p5)<<endl;
    cout<<sizeof(p6)<<endl;
    cout<<sizeof(p7)<<endl;
    cout<<sizeof(p8)<<endl;
    cout<<sizeof(p9)<<endl;
    return 0;
}