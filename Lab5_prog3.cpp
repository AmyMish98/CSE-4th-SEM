#include<iostream>
using namespace std;

class A
{
    int getx()
    {
        return x;
    }
public:
    int x;
    A(){}
    A(int num)
    {
        x=num;
    }

    void display()
    {
        cout<<x<<endl;
    }
    void memfunc()
    {
        cout<<getx()<<endl;
    }
};

int main()
{
    int num;
    cout<<"\n Enter a number : ";
    cin>>num;
    A obj1(num);
    A obj2;
    obj2.x=obj1.x;
    cout<<"\n Value of the data member when defined inside the class: "<<obj1.x;
    cout<<"\n Value of the data member when defined outside the class: "<<obj2.x;
    cout<<"\n Value of data member when displayed by the private member function getx() : ";
    obj1.memfunc();
    return 0;
}
