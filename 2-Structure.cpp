#include<iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle r;
    r.length = 15;
    r.breadth = 8;
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    return 0; 
}
