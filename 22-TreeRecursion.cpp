#include<iostream>
using namespace std;

int rec(int n) {
    if (n > 0) {
        cout<<n<<endl;
        rec(n-1);
        rec(n-1);
    }
    return 0;
}

int main () {
    int a = 3;
    cout<<rec(a)<<endl;
    return 0;
}

//Time complexity : O(2^N)