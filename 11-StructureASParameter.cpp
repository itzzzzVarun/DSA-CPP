#include<iostream>
using namespace std;

struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

struct ArrayStruct 
{
    /* data */
    int arr[5];
};

int areaByValue(struct Rectangle r) {
    return r.length*r.breadth;
}

int areaByReference(struct Rectangle &r) {
    r.length++;
    return r.length*r.breadth;
}

int changeLengthByAddress(struct Rectangle *p, int L) {
    p->length = L;
    return 0;
}

int ArrayInStructure(struct ArrayStruct arr) {
    arr.arr[0] = 10;
    return arr.arr[0];
}
int main() {
    struct Rectangle r = {10,5};
    struct ArrayStruct arr = {{1,2,3,4,5}}; 
    cout<<"Area is (Call by Value): "<<areaByValue(r)<<endl;
    cout<<"Area is (Call by Reference): "<<areaByReference(r)<<endl;
    cout<<"Length is changed (Call by Address): "<<changeLengthByAddress(&r,20)<<endl;
    cout<<"New Length is: "<<r.length<<endl;
    cout<<"Sending and Manipulating Array using structure (Call by Value): "<<ArrayInStructure(arr)<<endl;
    return 0;
}