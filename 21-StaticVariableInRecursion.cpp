#include<iostream>

using namespace std;

int rec(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return rec(n-1) + x;
    }
    return 0;
}

int main() {
    int a = 5;
    cout<<rec(a)<<endl;
    return 0;
}