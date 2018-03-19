//Write a program to show the method of object as a function argument.
#include<iostream>
using namespace std;
class A
{
    int x;
public:
    int fact(int p)
    {
        if (p==1)
            return p;
        else
            return p*fact(p-1);
    }
    int getx()
    {
        return x;
    }
    void readx()
    {
        cout<<"\n Enter a number: ";
        cin>>x;
    }
    void displayx(int fact)
    {
        cout<<"\n Factorial of "<<x<<" : "<<fact;
    }
};

int main()
{
    A obj;
    obj.readx();
    obj.displayx(obj.fact(obj.getx()));   //method of object has been used as a argument of a function twice
    return 0;
}
