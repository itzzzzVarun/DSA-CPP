#include<iostream>

using namespace std;

int sum (int n) {
    if (n == 0) {
        return 0;
    } else {
        return sum(n-1) + n;
    }
}

int main() {
    int a = 5;
    cout<<sum(a)<<endl;
    return 0;
}

//Time complexity : O(N)
// Space complexity :  O(N)