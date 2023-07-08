#include<iostream>
#include<stdio.h>

using namespace std;
int Area(int  length, int breadth) {
    return length*breadth;
}

int Parimeter(int length, int breadth) {
    return 2*(length+breadth);
}
int main() {
    int length = 0,  breadth = 0;
    printf("Enter the length and breadth:\n");
    cin>>length>>breadth;
    int area = Area(length, breadth);
    int pari = Parimeter(length, breadth);
    cout<<"Area is: "<<area<<endl<<"Perimeter is: "<<pari<<endl;
    return 0;

}