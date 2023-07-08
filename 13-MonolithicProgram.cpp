#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    int length = 0, breadth = 0;
    printf("Enter length and breadth: \n");
    cin>>length>>breadth;
    int area = length*breadth;
    int pari = 2*(length+breadth);
    cout<<"Area is: "<<area<<endl<<"Parameter is: "<<pari<<endl;
    return 0;
}