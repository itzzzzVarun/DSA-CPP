#include<iostream>

using namespace std;
int B(int n);
int A(int n) {
    if (n>0) {
        cout<<n<<" ";
        B(n-1);
    }
    return 0;
}

int B(int n) {
    if (n>0) {
        cout<<n<<" ";
        A(n/2);
    }
    return 0;
}

int main()  {
    int a = 20;
    cout<<A(a)<<endl;
    return 0;
}