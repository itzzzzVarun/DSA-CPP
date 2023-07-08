#include<iostream>
#include<stdio.h>

using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle() {
            length = 0;
            breadth = 0;
        }

        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }

        int Area() {
            return length*breadth;
        }

        int Parimeter() {
            return 2*(length+breadth);
        }

        void setLenght(int l) {
            length  = l;
        }

        void setBreadth(int b) {
            breadth = b;
        }
        int getLength() {
            return length;
        }

        int getBreadth() {
            return breadth;
        }

};

int  main() {

    printf("Enter length and breadth: \n");
    int l, b;
    cin>>l>>b;
    Rectangle r(l,b);
    cout<<"Area is: "<<r.Area()<<endl<<"Parimeter is: "<<r.Parimeter()<<endl;
    return 0;

}