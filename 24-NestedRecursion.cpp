#include<iostream>

using namespace std;

int rec(int n) {
    if (n>100) {
        return n - 10;
    } else {
        rec(rec(n+11));
    }
}

int main() {
    int a = 95;
    cout<<rec(a)<<endl;
    return 0;
}