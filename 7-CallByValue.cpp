#include<iostream>
using namespace std;

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<x<<endl<<y<<endl;
}

int main() {
    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
}