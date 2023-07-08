#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int length, int breadth) {
    r->length = length;
    r->breadth = breadth;
}

int Area(struct Rectangle r) {
    return r.length*r.breadth;
}

int Parimeter(struct Rectangle r) {
    return 2*(r.length + r.breadth);
} 


int main() {
    struct Rectangle r = {0,0};
    int l,b;
    printf("Enter the length and breadth: \n");
    cin>>l>>b;
    initialize(&r,l,b);
    int area = Area(r);
    int pari = Parimeter(r);
    cout<<"Area is: "<<area<<endl<<"Parimeter is: "<<pari<<endl;
    return 0;
}