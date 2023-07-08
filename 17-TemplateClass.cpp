#include<iostream>
#include<stdio.h>

using namespace std;

template<class T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a=a;
    this->b=b;
}

template<class T>
T Arithmetic<T>::add() {
    T c;
    c = a+b;
    return c;
}

template<class T>
T Arithmetic<T>::sub() {
    T c;
    c = a-b;
    return c; 
}

int main() {
    Arithmetic<int> ar1(10,20);
    Arithmetic<float> ar2(10.58,20.95);
    cout<<"Sum is: "<<ar1.add()<<endl<<"Sub is: "<<ar1.sub()<<endl;
    cout<<"Sum is: "<<ar2.add()<<endl<<"Sub is: "<<ar2.sub()<<endl;
    return 0;
}