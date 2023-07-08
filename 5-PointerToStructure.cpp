#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle r = {10,5};
    struct Rectangle *p1 = &r;
    cout<<(*p1).length<<endl;
    //Also we can do
    cout<<p1->length<<endl;

    cout<<"Creating structure using Pointer in Heap momery"<<endl;
    struct Rectangle *p2;
    p2 = new struct Rectangle[sizeof(struct Rectangle)];
    p2->length = 10;
    p2->breadth = 5;
    cout<<p2->length<<endl;
    cout<<p2->breadth<<endl;

    return 0;
}