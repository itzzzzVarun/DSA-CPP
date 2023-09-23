#include<iostream>

using namespace std;

int powSlow(int m, int n) {
    if (n == 0) {
        return 1;
    } else {
        return powSlow(m,n-1) * m;
    }
}

int powFast(int m, int n) {
    if (n == 0) {
        return 1;
    }
    if (n%2 == 0) {
        return powFast(m*m, n/2);
    } else {
        return m*powFast(m*m,(n-1)/2);
    }
}
 
int main () {
    int a = 2;
    int b = 9;
    cout<<powFast(a,b)<<endl;
    cout<<powSlow(a,b)<<endl;
    return 0;
}

// Time Complexity : O(N)
// Space Complexity : O(N)