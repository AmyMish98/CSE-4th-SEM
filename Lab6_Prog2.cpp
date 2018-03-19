//Write a program to show operator overloading in unary operator, binary operator
//UNARY OPERATOR
#include<iostream>
using namespace std;

class complex {
    int a, b, c;
public:

    complex() {
    }

    void getvalue() {
        cout << "Enter the Two Numbers:";
        cin >> a>>b;
    }

    void operator++() {
        a = ++a;
        b = ++b;
    }

    void operator--() {
        a = --a;
        b = --b;
    }

    void display() {
        cout << a << " + " << b << "i" << endl;
    }
};

int main() {
    complex obj;
    obj.getvalue();
    obj.operator++();
    cout << "Increment Complex Number\n";
    obj.display();
    obj.operator--();
    cout << "Decrement Complex Number\n";
    obj.display();
    return 0;
}
