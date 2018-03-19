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


//BINARY OPERATOR
#include<iostream>
using namespace std;

class complex {
    int a, b;
public:

    void getvalue() {
        cout << "\n Enter the value of Complex Numbers a,b: ";
        cin >> a>>b;
    }

    complex operator+(complex ob) {
        complex t;
        t.a = a + ob.a;
        t.b = b + ob.b;
        return (t);
    }

    complex operator-(complex ob) {
        complex t;
        t.a = a - ob.a;
        t.b = b - ob.b;
        return (t);
    }

    void display() {
        cout << a << " + " << b << "i" << "\n";
    }
};

int main() {

    complex obj1, obj2, result, result1;

    obj1.getvalue();
    obj2.getvalue();

    result = obj1 + obj2;
    result1 = obj1 - obj2;

    cout << "Input Values:\n";
    obj1.display();
    obj2.display();

    cout << "Result: \n";
    result.display();
    result1.display();

    return 0;
}
